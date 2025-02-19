﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/email/SESServiceClientModel.h>

namespace Aws
{
namespace SES
{
  /**
   * <fullname>Amazon Simple Email Service</fullname> <p> This document contains
   * reference information for the <a href="https://aws.amazon.com/ses/">Amazon
   * Simple Email Service</a> (Amazon SES) API, version 2010-12-01. This document is
   * best used in conjunction with the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>. </p>  <p> For a list of Amazon SES endpoints to
   * use in service requests, see <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions
   * and Amazon SES</a> in the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>.</p> 
   */
  class AWS_SES_API SESClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SESClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Creates a receipt rule set by cloning an existing one. All receipt rules and
         * configurations are copied to the new receipt rule set and are completely
         * independent of the source rule set.</p> <p>For information about setting up rule
         * sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneReceiptRuleSetOutcome CloneReceiptRuleSet(const Model::CloneReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CloneReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloneReceiptRuleSetOutcomeCallable CloneReceiptRuleSetCallable(const Model::CloneReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for CloneReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloneReceiptRuleSetAsync(const Model::CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration set.</p> <p>Configuration sets enable you to publish
         * email sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetAsync(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration set event destination.</p>  <p>When you create
         * or update an event destination, you must provide one, and only one, destination.
         * The destination can be CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS).</p>  <p>An event destination is the
         * AWS service to which Amazon SES publishes the email sending events associated
         * with a configuration set. For information about using configuration sets, see
         * the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetEventDestinationAsync(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetTrackingOptionsOutcome CreateConfigurationSetTrackingOptions(const Model::CreateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetTrackingOptionsOutcomeCallable CreateConfigurationSetTrackingOptionsCallable(const Model::CreateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetTrackingOptionsAsync(const Model::CreateConfigurationSetTrackingOptionsRequest& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcome CreateCustomVerificationEmailTemplate(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcomeCallable CreateCustomVerificationEmailTemplateCallable(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomVerificationEmailTemplateAsync(const Model::CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IP address filter.</p> <p>For information about setting up IP
         * address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptFilterOutcome CreateReceiptFilter(const Model::CreateReceiptFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptFilterOutcomeCallable CreateReceiptFilterCallable(const Model::CreateReceiptFilterRequest& request) const;

        /**
         * An Async wrapper for CreateReceiptFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptFilterAsync(const Model::CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a receipt rule.</p> <p>For information about setting up receipt
         * rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleOutcome CreateReceiptRule(const Model::CreateReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptRuleOutcomeCallable CreateReceiptRuleCallable(const Model::CreateReceiptRuleRequest& request) const;

        /**
         * An Async wrapper for CreateReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptRuleAsync(const Model::CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty receipt rule set.</p> <p>For information about setting up
         * receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleSetOutcome CreateReceiptRuleSet(const Model::CreateReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CreateReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptRuleSetOutcomeCallable CreateReceiptRuleSetCallable(const Model::CreateReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for CreateReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptRuleSetAsync(const Model::CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const Model::CreateTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration set. Configuration sets enable you to publish email
         * sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetAsync(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration set event destination. Configuration set event
         * destinations are associated with configuration sets, which enable you to publish
         * email sending events. For information about using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetEventDestinationAsync(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an association between a configuration set and a custom domain for
         * open and click event tracking.</p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p>  <p>Deleting this kind of association will
         * result in emails sent using the specified configuration set to capture open and
         * click events using the standard, Amazon SES-operated domains.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetTrackingOptionsOutcome DeleteConfigurationSetTrackingOptions(const Model::DeleteConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetTrackingOptionsOutcomeCallable DeleteConfigurationSetTrackingOptionsCallable(const Model::DeleteConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetTrackingOptionsAsync(const Model::DeleteConfigurationSetTrackingOptionsRequest& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing custom verification email template. </p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcome DeleteCustomVerificationEmailTemplate(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcomeCallable DeleteCustomVerificationEmailTemplateCallable(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomVerificationEmailTemplateAsync(const Model::DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified identity (an email address or a domain) from the list
         * of verified identities.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityOutcome DeleteIdentity(const Model::DeleteIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityOutcomeCallable DeleteIdentityCallable(const Model::DeleteIdentityRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityAsync(const Model::DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPolicyOutcome DeleteIdentityPolicy(const Model::DeleteIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityPolicyOutcomeCallable DeleteIdentityPolicyCallable(const Model::DeleteIdentityPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityPolicyAsync(const Model::DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IP address filter.</p> <p>For information about
         * managing IP address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptFilterOutcome DeleteReceiptFilter(const Model::DeleteReceiptFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptFilterOutcomeCallable DeleteReceiptFilterCallable(const Model::DeleteReceiptFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteReceiptFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptFilterAsync(const Model::DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified receipt rule.</p> <p>For information about managing
         * receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleOutcome DeleteReceiptRule(const Model::DeleteReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptRuleOutcomeCallable DeleteReceiptRuleCallable(const Model::DeleteReceiptRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptRuleAsync(const Model::DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified receipt rule set and all of the receipt rules it
         * contains.</p>  <p>The currently active rule set cannot be deleted.</p>
         *  <p>For information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleSetOutcome DeleteReceiptRuleSet(const Model::DeleteReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptRuleSetOutcomeCallable DeleteReceiptRuleSetCallable(const Model::DeleteReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for DeleteReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptRuleSetAsync(const Model::DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>DeleteIdentity</code> operation to delete email
         * addresses and domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteVerifiedEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedEmailAddressOutcome DeleteVerifiedEmailAddress(const Model::DeleteVerifiedEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedEmailAddressOutcomeCallable DeleteVerifiedEmailAddressCallable(const Model::DeleteVerifiedEmailAddressRequest& request) const;

        /**
         * An Async wrapper for DeleteVerifiedEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedEmailAddressAsync(const Model::DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata and receipt rules for the receipt rule set that is
         * currently active.</p> <p>For information about setting up receipt rule sets, see
         * the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActiveReceiptRuleSetOutcome DescribeActiveReceiptRuleSet(const Model::DescribeActiveReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeActiveReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActiveReceiptRuleSetOutcomeCallable DescribeActiveReceiptRuleSetCallable(const Model::DescribeActiveReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for DescribeActiveReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActiveReceiptRuleSetAsync(const Model::DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified configuration set. For information about
         * using configuration sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSetOutcome DescribeConfigurationSet(const Model::DescribeConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationSetOutcomeCallable DescribeConfigurationSetCallable(const Model::DescribeConfigurationSetRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationSetAsync(const Model::DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified receipt rule.</p> <p>For information
         * about setting up receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleOutcome DescribeReceiptRule(const Model::DescribeReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReceiptRuleOutcomeCallable DescribeReceiptRuleCallable(const Model::DescribeReceiptRuleRequest& request) const;

        /**
         * An Async wrapper for DescribeReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReceiptRuleAsync(const Model::DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified receipt rule set.</p> <p>For information
         * about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleSetOutcome DescribeReceiptRuleSet(const Model::DescribeReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReceiptRuleSetOutcomeCallable DescribeReceiptRuleSetCallable(const Model::DescribeReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for DescribeReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReceiptRuleSetAsync(const Model::DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the email sending status of the Amazon SES account for the current
         * region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetAccountSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSendingEnabledOutcome GetAccountSendingEnabled(const Model::GetAccountSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSendingEnabledOutcomeCallable GetAccountSendingEnabledCallable(const Model::GetAccountSendingEnabledRequest& request) const;

        /**
         * An Async wrapper for GetAccountSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSendingEnabledAsync(const Model::GetAccountSendingEnabledRequest& request, const GetAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcome GetCustomVerificationEmailTemplate(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcomeCallable GetCustomVerificationEmailTemplateCallable(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for GetCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomVerificationEmailTemplateAsync(const Model::GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of Easy DKIM signing for an entity. For domain
         * name identities, this operation also returns the DKIM tokens that are required
         * for Easy DKIM signing, and whether Amazon SES has successfully verified that
         * these tokens have been published.</p> <p>This operation takes a list of
         * identities as input and returns the following information for each:</p> <ul>
         * <li> <p>Whether Easy DKIM signing is enabled or disabled.</p> </li> <li> <p>A
         * set of DKIM tokens that represent the identity. If the identity is an email
         * address, the tokens represent the domain of that address.</p> </li> <li>
         * <p>Whether Amazon SES has successfully verified the DKIM tokens published in the
         * domain's DNS. This information is only returned for domain name identities, not
         * for email addresses.</p> </li> </ul> <p>This operation is throttled at one
         * request per second and can only get DKIM attributes for up to 100 identities at
         * a time.</p> <p>For more information about creating DNS records using DKIM
         * tokens, go to the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityDkimAttributesOutcome GetIdentityDkimAttributes(const Model::GetIdentityDkimAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityDkimAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityDkimAttributesOutcomeCallable GetIdentityDkimAttributesCallable(const Model::GetIdentityDkimAttributesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityDkimAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityDkimAttributesAsync(const Model::GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the custom MAIL FROM attributes for a list of identities (email
         * addresses : domains).</p> <p>This operation is throttled at one request per
         * second and can only get custom MAIL FROM attributes for up to 100 identities at
         * a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityMailFromDomainAttributesOutcome GetIdentityMailFromDomainAttributes(const Model::GetIdentityMailFromDomainAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityMailFromDomainAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityMailFromDomainAttributesOutcomeCallable GetIdentityMailFromDomainAttributesCallable(const Model::GetIdentityMailFromDomainAttributesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityMailFromDomainAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityMailFromDomainAttributesAsync(const Model::GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a list of verified identities (email addresses and/or domains), returns
         * a structure describing identity notification attributes.</p> <p>This operation
         * is throttled at one request per second and can only get notification attributes
         * for up to 100 identities at a time.</p> <p>For more information about using
         * notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityNotificationAttributesOutcome GetIdentityNotificationAttributes(const Model::GetIdentityNotificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityNotificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityNotificationAttributesOutcomeCallable GetIdentityNotificationAttributesCallable(const Model::GetIdentityNotificationAttributesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityNotificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityNotificationAttributesAsync(const Model::GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoliciesOutcome GetIdentityPolicies(const Model::GetIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoliciesOutcomeCallable GetIdentityPoliciesCallable(const Model::GetIdentityPoliciesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityPoliciesAsync(const Model::GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a list of identities (email addresses and/or domains), returns the
         * verification status and (for domain identities) the verification token for each
         * identity.</p> <p>The verification status of an email address is "Pending" until
         * the email address owner clicks the link within the verification email that
         * Amazon SES sent to that address. If the email address owner clicks the link
         * within 24 hours, the verification status of the email address changes to
         * "Success". If the link is not clicked within 24 hours, the verification status
         * changes to "Failed." In that case, if you still want to verify the email
         * address, you must restart the verification process from the beginning.</p>
         * <p>For domain identities, the domain's verification status is "Pending" as
         * Amazon SES searches for the required TXT record in the DNS settings of the
         * domain. When Amazon SES detects the record, the domain's verification status
         * changes to "Success". If Amazon SES is unable to detect the record within 72
         * hours, the domain's verification status changes to "Failed." In that case, if
         * you still want to verify the domain, you must restart the verification process
         * from the beginning.</p> <p>This operation is throttled at one request per second
         * and can only get verification attributes for up to 100 identities at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityVerificationAttributesOutcome GetIdentityVerificationAttributes(const Model::GetIdentityVerificationAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetIdentityVerificationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityVerificationAttributesOutcomeCallable GetIdentityVerificationAttributesCallable(const Model::GetIdentityVerificationAttributesRequest& request) const;

        /**
         * An Async wrapper for GetIdentityVerificationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityVerificationAttributesAsync(const Model::GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the sending limits for the Amazon SES account. </p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendQuotaOutcome GetSendQuota(const Model::GetSendQuotaRequest& request) const;

        /**
         * A Callable wrapper for GetSendQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSendQuotaOutcomeCallable GetSendQuotaCallable(const Model::GetSendQuotaRequest& request) const;

        /**
         * An Async wrapper for GetSendQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSendQuotaAsync(const Model::GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides sending statistics for the current AWS Region. The result is a list
         * of data points, representing the last two weeks of sending activity. Each data
         * point in the list contains statistics for a 15-minute period of time.</p> <p>You
         * can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendStatisticsOutcome GetSendStatistics(const Model::GetSendStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetSendStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSendStatisticsOutcomeCallable GetSendStatisticsCallable(const Model::GetSendStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetSendStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSendStatisticsAsync(const Model::GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the template object (which includes the Subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemplateOutcomeCallable GetTemplateCallable(const Model::GetTemplateRequest& request) const;

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of the configuration sets associated with your Amazon SES
         * account in the current AWS Region. For information about using configuration
         * sets, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> <p>You can execute this operation no more than once per second. This
         * operation will return up to 1,000 configuration sets each time it is run. If
         * your Amazon SES account has more than 1,000 configuration sets, this operation
         * will also return a NextToken element. You can then execute the
         * <code>ListConfigurationSets</code> operation again, passing the
         * <code>NextToken</code> parameter and the value of the NextToken element to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationSetsAsync(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current AWS Region.</p> <p>For more information about custom verification
         * email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcome ListCustomVerificationEmailTemplates(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListCustomVerificationEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcomeCallable ListCustomVerificationEmailTemplatesCallable(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListCustomVerificationEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomVerificationEmailTemplatesAsync(const Model::ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list containing all of the identities (email addresses and domains)
         * for your AWS account in the current AWS Region, regardless of verification
         * status.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

        /**
         * An Async wrapper for ListIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of sending authorization policies that are attached to the
         * given identity (an email address or a domain). This API returns only a list. If
         * you want the actual policy content, you can use
         * <code>GetIdentityPolicies</code>.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoliciesOutcome ListIdentityPolicies(const Model::ListIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoliciesOutcomeCallable ListIdentityPoliciesCallable(const Model::ListIdentityPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityPoliciesAsync(const Model::ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IP address filters associated with your AWS account in the current
         * AWS Region.</p> <p>For information about managing IP address filters, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptFiltersOutcome ListReceiptFilters(const Model::ListReceiptFiltersRequest& request) const;

        /**
         * A Callable wrapper for ListReceiptFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceiptFiltersOutcomeCallable ListReceiptFiltersCallable(const Model::ListReceiptFiltersRequest& request) const;

        /**
         * An Async wrapper for ListReceiptFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceiptFiltersAsync(const Model::ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the receipt rule sets that exist under your AWS account in the current
         * AWS Region. If there are additional receipt rule sets to be retrieved, you will
         * receive a <code>NextToken</code> that you can provide to the next call to
         * <code>ListReceiptRuleSets</code> to retrieve the additional entries.</p> <p>For
         * information about managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptRuleSetsOutcome ListReceiptRuleSets(const Model::ListReceiptRuleSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReceiptRuleSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceiptRuleSetsOutcomeCallable ListReceiptRuleSetsCallable(const Model::ListReceiptRuleSetsRequest& request) const;

        /**
         * An Async wrapper for ListReceiptRuleSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceiptRuleSetsAsync(const Model::ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * AWS Region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const Model::ListTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>ListIdentities</code> operation to list the email
         * addresses and domains associated with your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVerifiedEmailAddressesOutcome ListVerifiedEmailAddresses(const Model::ListVerifiedEmailAddressesRequest& request) const;

        /**
         * A Callable wrapper for ListVerifiedEmailAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVerifiedEmailAddressesOutcomeCallable ListVerifiedEmailAddressesCallable(const Model::ListVerifiedEmailAddressesRequest& request) const;

        /**
         * An Async wrapper for ListVerifiedEmailAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVerifiedEmailAddressesAsync(const Model::ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the delivery options for a configuration set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcome PutConfigurationSetDeliveryOptions(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetDeliveryOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcomeCallable PutConfigurationSetDeliveryOptionsCallable(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * An Async wrapper for PutConfigurationSetDeliveryOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetDeliveryOptionsAsync(const Model::PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates a sending authorization policy for the specified identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIdentityPolicyOutcome PutIdentityPolicy(const Model::PutIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIdentityPolicyOutcomeCallable PutIdentityPolicyCallable(const Model::PutIdentityPolicyRequest& request) const;

        /**
         * An Async wrapper for PutIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIdentityPolicyAsync(const Model::PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reorders the receipt rules within a receipt rule set.</p>  <p>All of
         * the rules in the rule set must be represented in this request. That is, this API
         * will return an error if the reorder request doesn't explicitly position all of
         * the rules.</p>  <p>For information about managing receipt rule sets, see
         * the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ReorderReceiptRuleSetOutcome ReorderReceiptRuleSet(const Model::ReorderReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for ReorderReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReorderReceiptRuleSetOutcomeCallable ReorderReceiptRuleSetCallable(const Model::ReorderReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for ReorderReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReorderReceiptRuleSetAsync(const Model::ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates and sends a bounce message to the sender of an email you received
         * through Amazon SES. You can only use this API on an email up to 24 hours after
         * you receive it.</p>  <p>You cannot use this API to send generic bounces
         * for mail that was not received by Amazon SES.</p>  <p>For information
         * about receiving email through Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounce">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBounceOutcome SendBounce(const Model::SendBounceRequest& request) const;

        /**
         * A Callable wrapper for SendBounce that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBounceOutcomeCallable SendBounceCallable(const Model::SendBounceRequest& request) const;

        /**
         * An Async wrapper for SendBounce that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBounceAsync(const Model::SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message to multiple destinations. The message body is
         * created using an email template.</p> <p>In order to send email using the
         * <code>SendBulkTemplatedEmail</code> operation, your call to the API must meet
         * the following requirements:</p> <ul> <li> <p>The call must refer to an existing
         * email template. You can create email templates using the <a>CreateTemplate</a>
         * operation.</p> </li> <li> <p>The message must be sent from a verified email
         * address or domain.</p> </li> <li> <p>If your account is still in the Amazon SES
         * sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>Each
         * <code>Destination</code> parameter must include at least one recipient email
         * address. The recipient address can be a To: address, a CC: address, or a BCC:
         * address. If a recipient email address is invalid (that is, it is not in the
         * format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message
         * will be rejected, even if the message contains other recipients that are
         * valid.</p> </li> <li> <p>The message may not include more than 50 recipients,
         * across the To:, CC: and BCC: fields. If you need to send an email message to a
         * larger audience, you can divide your recipient list into groups of 50 or fewer,
         * and then call the <code>SendBulkTemplatedEmail</code> operation several times to
         * send the message to each group.</p> </li> <li> <p>The number of destinations you
         * can contact in a single call to the API may be limited by your account's maximum
         * sending rate.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBulkTemplatedEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBulkTemplatedEmailOutcome SendBulkTemplatedEmail(const Model::SendBulkTemplatedEmailRequest& request) const;

        /**
         * A Callable wrapper for SendBulkTemplatedEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBulkTemplatedEmailOutcomeCallable SendBulkTemplatedEmailCallable(const Model::SendBulkTemplatedEmailRequest& request) const;

        /**
         * An Async wrapper for SendBulkTemplatedEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBulkTemplatedEmailAsync(const Model::SendBulkTemplatedEmailRequest& request, const SendBulkTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current AWS Region and attempts to verify it. As a result of executing
         * this operation, a customized verification email is sent to the specified
         * address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCustomVerificationEmailOutcome SendCustomVerificationEmail(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * A Callable wrapper for SendCustomVerificationEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCustomVerificationEmailOutcomeCallable SendCustomVerificationEmailCallable(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * An Async wrapper for SendCustomVerificationEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCustomVerificationEmailAsync(const Model::SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. In order to
         * send email using the <code>SendEmail</code> operation, your message must meet
         * the following requirements:</p> <ul> <li> <p>The message must be sent from a
         * verified email address or domain. If you attempt to send email using a
         * non-verified address or domain, the operation will result in an "Email address
         * not verified" error. </p> </li> <li> <p>If your account is still in the Amazon
         * SES sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>The message
         * must include at least one recipient email address. The recipient address can be
         * a To: address, a CC: address, or a BCC: address. If a recipient email address is
         * invalid (that is, it is not in the format
         * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the entire message will be
         * rejected, even if the message contains other recipients that are valid.</p>
         * </li> <li> <p>The message may not include more than 50 recipients, across the
         * To:, CC: and BCC: fields. If you need to send an email message to a larger
         * audience, you can divide your recipient list into groups of 50 or fewer, and
         * then call the <code>SendEmail</code> operation several times to send the message
         * to each group.</p> </li> </ul>  <p>For every message that you send,
         * the total number of recipients (including each recipient in the To:, CC: and
         * BCC: fields) is counted against the maximum number of emails you can send in a
         * 24-hour period (your <i>sending quota</i>). For more information about sending
         * quotas in Amazon SES, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * A Callable wrapper for SendEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

        /**
         * An Async wrapper for SendEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message and immediately queues it for sending.</p> <p>This
         * operation is more flexible than the <code>SendEmail</code> API operation. When
         * you use the <code>SendRawEmail</code> operation, you can specify the headers of
         * the message as well as its content. This flexibility is useful, for example,
         * when you want to send a multipart MIME email (such a message that contains both
         * a text and an HTML version). You can also use this operation to send messages
         * that include attachments.</p> <p>The <code>SendRawEmail</code> operation has the
         * following requirements:</p> <ul> <li> <p>You can only send email from <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">verified
         * email addresses or domains</a>. If you try to send email from an address that
         * isn't verified, the operation results in an "Email address not verified"
         * error.</p> </li> <li> <p>If your account is still in the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/request-production-access.html">Amazon
         * SES sandbox</a>, you can only send email to other verified addresses in your
         * account, or to addresses that are associated with the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mailbox-simulator.html">Amazon
         * SES mailbox simulator</a>.</p> </li> <li> <p>The maximum message size, including
         * attachments, is 10 MB.</p> </li> <li> <p>Each message has to include at least
         * one recipient address. A recipient address includes any address on the To:, CC:,
         * or BCC: lines.</p> </li> <li> <p>If you send a single message to more than one
         * recipient address, and one of the recipient addresses isn't in a valid format
         * (that is, it's not in the format
         * <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), Amazon SES rejects the
         * entire message, even if the other addresses are valid.</p> </li> <li> <p>Each
         * message can include up to 50 recipient addresses across the To:, CC:, or BCC:
         * lines. If you need to send a single message to more than 50 recipients, you have
         * to split the list of recipient addresses into groups of less than 50 recipients,
         * and send separate messages to each group.</p> </li> <li> <p>Amazon SES allows
         * you to specify 8-bit Content-Transfer-Encoding for MIME message parts. However,
         * if Amazon SES has to modify the contents of your message (for example, if you
         * use open and click tracking), 8-bit content isn't preserved. For this reason, we
         * highly recommend that you encode all content that isn't 7-bit ASCII. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html#send-email-mime-encoding">MIME
         * Encoding</a> in the <i>Amazon SES Developer Guide</i>.</p> </li> </ul>
         * <p>Additionally, keep the following considerations in mind when using the
         * <code>SendRawEmail</code> operation:</p> <ul> <li> <p>Although you can customize
         * the message headers when using the <code>SendRawEmail</code> operation, Amazon
         * SES will automatically apply its own <code>Message-ID</code> and
         * <code>Date</code> headers; if you passed these headers when creating the
         * message, they will be overwritten by the values that Amazon SES provides.</p>
         * </li> <li> <p>If you are using sending authorization to send on behalf of
         * another user, <code>SendRawEmail</code> enables you to specify the cross-account
         * identity for the email's Source, From, and Return-Path parameters in one of two
         * ways: you can pass optional parameters <code>SourceArn</code>,
         * <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can
         * include the following X-headers in the header of your raw email:</p> <ul> <li>
         * <p> <code>X-SES-SOURCE-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-FROM-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-RETURN-PATH-ARN</code> </p> </li> </ul>  <p>Don't include
         * these X-headers in the DKIM signature. Amazon SES removes these before it sends
         * the email.</p>  <p>If you only specify the
         * <code>SourceIdentityArn</code> parameter, Amazon SES sets the From and
         * Return-Path addresses to the same identity that you specified.</p> <p>For more
         * information about sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Using
         * Sending Authorization with Amazon SES</a> in the <i>Amazon SES Developer
         * Guide.</i> </p> </li> <li> <p>For every message that you send, the total number
         * of recipients (including each recipient in the To:, CC: and BCC: fields) is
         * counted against the maximum number of emails you can send in a 24-hour period
         * (your <i>sending quota</i>). For more information about sending quotas in Amazon
         * SES, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide.</i>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendRawEmailOutcome SendRawEmail(const Model::SendRawEmailRequest& request) const;

        /**
         * A Callable wrapper for SendRawEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendRawEmailOutcomeCallable SendRawEmailCallable(const Model::SendRawEmailRequest& request) const;

        /**
         * An Async wrapper for SendRawEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendRawEmailAsync(const Model::SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message using an email template and immediately queues it
         * for sending.</p> <p>In order to send email using the
         * <code>SendTemplatedEmail</code> operation, your call to the API must meet the
         * following requirements:</p> <ul> <li> <p>The call must refer to an existing
         * email template. You can create email templates using the <a>CreateTemplate</a>
         * operation.</p> </li> <li> <p>The message must be sent from a verified email
         * address or domain.</p> </li> <li> <p>If your account is still in the Amazon SES
         * sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * </li> <li> <p>The maximum message size is 10 MB.</p> </li> <li> <p>Calls to the
         * <code>SendTemplatedEmail</code> operation may only include one
         * <code>Destination</code> parameter. A destination is a set of recipients who
         * will receive the same version of the email. The <code>Destination</code>
         * parameter can include up to 50 recipients, across the To:, CC: and BCC:
         * fields.</p> </li> <li> <p>The <code>Destination</code> parameter must include at
         * least one recipient email address. The recipient address can be a To: address, a
         * CC: address, or a BCC: address. If a recipient email address is invalid (that
         * is, it is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>),
         * the entire message will be rejected, even if the message contains other
         * recipients that are valid.</p> </li> </ul>  <p>If your call to the
         * <code>SendTemplatedEmail</code> operation includes all of the required
         * parameters, Amazon SES accepts it and returns a Message ID. However, if Amazon
         * SES can't render the email because the template contains errors, it doesn't send
         * the email. Additionally, because it already accepted the message, Amazon SES
         * doesn't return a message stating that it was unable to send the email.</p>
         * <p>For these reasons, we highly recommend that you set up Amazon SES to send you
         * notifications when Rendering Failure events occur. For more information, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Sending
         * Personalized Email Using the Amazon SES API</a> in the <i>Amazon Simple Email
         * Service Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendTemplatedEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTemplatedEmailOutcome SendTemplatedEmail(const Model::SendTemplatedEmailRequest& request) const;

        /**
         * A Callable wrapper for SendTemplatedEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTemplatedEmailOutcomeCallable SendTemplatedEmailCallable(const Model::SendTemplatedEmailRequest& request) const;

        /**
         * An Async wrapper for SendTemplatedEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTemplatedEmailAsync(const Model::SendTemplatedEmailRequest& request, const SendTemplatedEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified receipt rule set as the active receipt rule set.</p>
         *  <p>To disable your email-receiving through Amazon SES completely, you can
         * call this API with RuleSetName set to null.</p>  <p>For information about
         * managing receipt rule sets, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::SetActiveReceiptRuleSetOutcome SetActiveReceiptRuleSet(const Model::SetActiveReceiptRuleSetRequest& request) const;

        /**
         * A Callable wrapper for SetActiveReceiptRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetActiveReceiptRuleSetOutcomeCallable SetActiveReceiptRuleSetCallable(const Model::SetActiveReceiptRuleSetRequest& request) const;

        /**
         * An Async wrapper for SetActiveReceiptRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetActiveReceiptRuleSetAsync(const Model::SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables Easy DKIM signing of email sent from an identity. If Easy
         * DKIM signing is enabled for a domain, then Amazon SES uses DKIM to sign all
         * email that it sends from addresses on that domain. If Easy DKIM signing is
         * enabled for an email address, then Amazon SES uses DKIM to sign all email it
         * sends from that address.</p>  <p>For email addresses (for example,
         * <code>user@example.com</code>), you can only enable DKIM signing if the
         * corresponding domain (in this case, <code>example.com</code>) has been set up to
         * use Easy DKIM.</p>  <p>You can enable DKIM signing for an identity at any
         * time after you start the verification process for the identity, even if the
         * verification process isn't complete. </p> <p>You can execute this operation no
         * more than once per second.</p> <p>For more information about Easy DKIM signing,
         * go to the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityDkimEnabledOutcome SetIdentityDkimEnabled(const Model::SetIdentityDkimEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityDkimEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityDkimEnabledOutcomeCallable SetIdentityDkimEnabledCallable(const Model::SetIdentityDkimEnabledRequest& request) const;

        /**
         * An Async wrapper for SetIdentityDkimEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityDkimEnabledAsync(const Model::SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given an identity (an email address or a domain), enables or disables whether
         * Amazon SES forwards bounce and complaint notifications as email. Feedback
         * forwarding can only be disabled when Amazon Simple Notification Service (Amazon
         * SNS) topics are specified for both bounces and complaints.</p> 
         * <p>Feedback forwarding does not apply to delivery notifications. Delivery
         * notifications are only available through Amazon SNS.</p>  <p>You can
         * execute this operation no more than once per second.</p> <p>For more information
         * about using notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityFeedbackForwardingEnabledOutcome SetIdentityFeedbackForwardingEnabled(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityFeedbackForwardingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityFeedbackForwardingEnabledOutcomeCallable SetIdentityFeedbackForwardingEnabledCallable(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

        /**
         * An Async wrapper for SetIdentityFeedbackForwardingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityFeedbackForwardingEnabledAsync(const Model::SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given an identity (an email address or a domain), sets whether Amazon SES
         * includes the original email headers in the Amazon Simple Notification Service
         * (Amazon SNS) notifications of a specified type.</p> <p>You can execute this
         * operation no more than once per second.</p> <p>For more information about using
         * notifications with Amazon SES, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityHeadersInNotificationsEnabledOutcome SetIdentityHeadersInNotificationsEnabled(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityHeadersInNotificationsEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityHeadersInNotificationsEnabledOutcomeCallable SetIdentityHeadersInNotificationsEnabledCallable(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request) const;

        /**
         * An Async wrapper for SetIdentityHeadersInNotificationsEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityHeadersInNotificationsEnabledAsync(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables the custom MAIL FROM domain setup for a verified identity
         * (an email address or a domain).</p>  <p>To send emails using the
         * specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's
         * DNS settings. If you want your emails to pass Sender Policy Framework (SPF)
         * checks, you must also add or update an SPF record. For more information, see the
         * <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from-set.html">Amazon
         * SES Developer Guide</a>.</p>  <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityMailFromDomainOutcome SetIdentityMailFromDomain(const Model::SetIdentityMailFromDomainRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityMailFromDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityMailFromDomainOutcomeCallable SetIdentityMailFromDomainCallable(const Model::SetIdentityMailFromDomainRequest& request) const;

        /**
         * An Async wrapper for SetIdentityMailFromDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityMailFromDomainAsync(const Model::SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets an Amazon Simple Notification Service (Amazon SNS) topic to use when
         * delivering notifications. When you use this operation, you specify a verified
         * identity, such as an email address or domain. When you send an email that uses
         * the chosen identity in the Source field, Amazon SES sends notifications to the
         * topic you specified. You can send bounce, complaint, or delivery notifications
         * (or any combination of the three) to the Amazon SNS topic that you specify.</p>
         * <p>You can execute this operation no more than once per second.</p> <p>For more
         * information about feedback notification, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityNotificationTopicOutcome SetIdentityNotificationTopic(const Model::SetIdentityNotificationTopicRequest& request) const;

        /**
         * A Callable wrapper for SetIdentityNotificationTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityNotificationTopicOutcomeCallable SetIdentityNotificationTopicCallable(const Model::SetIdentityNotificationTopicRequest& request) const;

        /**
         * An Async wrapper for SetIdentityNotificationTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityNotificationTopicAsync(const Model::SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the position of the specified receipt rule in the receipt rule set.</p>
         * <p>For information about managing receipt rules, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SetReceiptRulePositionOutcome SetReceiptRulePosition(const Model::SetReceiptRulePositionRequest& request) const;

        /**
         * A Callable wrapper for SetReceiptRulePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetReceiptRulePositionOutcomeCallable SetReceiptRulePositionCallable(const Model::SetReceiptRulePositionRequest& request) const;

        /**
         * An Async wrapper for SetReceiptRulePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetReceiptRulePositionAsync(const Model::SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/TestRenderTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRenderTemplateOutcome TestRenderTemplate(const Model::TestRenderTemplateRequest& request) const;

        /**
         * A Callable wrapper for TestRenderTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestRenderTemplateOutcomeCallable TestRenderTemplateCallable(const Model::TestRenderTemplateRequest& request) const;

        /**
         * An Async wrapper for TestRenderTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestRenderTemplateAsync(const Model::TestRenderTemplateRequest& request, const TestRenderTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables email sending across your entire Amazon SES account in
         * the current AWS Region. You can use this operation in conjunction with Amazon
         * CloudWatch alarms to temporarily pause email sending across your Amazon SES
         * account in a given AWS Region when reputation metrics (such as your bounce or
         * complaint rates) reach certain thresholds.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateAccountSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSendingEnabledOutcome UpdateAccountSendingEnabled(const Model::UpdateAccountSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSendingEnabledOutcomeCallable UpdateAccountSendingEnabledCallable(const Model::UpdateAccountSendingEnabledRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSendingEnabledAsync(const Model::UpdateAccountSendingEnabledRequest& request, const UpdateAccountSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the event destination of a configuration set. Event destinations are
         * associated with configuration sets, which enable you to publish email sending
         * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS). For information about using configuration
         * sets, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer Guide.</i>
         * </p>  <p>When you create or update an event destination, you must provide
         * one, and only one, destination. The destination can be Amazon CloudWatch, Amazon
         * Kinesis Firehose, or Amazon Simple Notification Service (Amazon SNS).</p>
         *  <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetEventDestinationAsync(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables the publishing of reputation metrics for emails sent
         * using a specific configuration set in a given AWS Region. Reputation metrics
         * include bounce and complaint rates. These metrics are published to Amazon
         * CloudWatch. By using CloudWatch, you can create alarms when bounce or complaint
         * rates exceed certain thresholds.</p> <p>You can execute this operation no more
         * than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetReputationMetricsEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetReputationMetricsEnabledOutcome UpdateConfigurationSetReputationMetricsEnabled(const Model::UpdateConfigurationSetReputationMetricsEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetReputationMetricsEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetReputationMetricsEnabledOutcomeCallable UpdateConfigurationSetReputationMetricsEnabledCallable(const Model::UpdateConfigurationSetReputationMetricsEnabledRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationSetReputationMetricsEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetReputationMetricsEnabledAsync(const Model::UpdateConfigurationSetReputationMetricsEnabledRequest& request, const UpdateConfigurationSetReputationMetricsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables email sending for messages sent using a specific
         * configuration set in a given AWS Region. You can use this operation in
         * conjunction with Amazon CloudWatch alarms to temporarily pause email sending for
         * a configuration set when the reputation metrics for that configuration set (such
         * as your bounce on complaint rate) exceed certain thresholds.</p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetSendingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetSendingEnabledOutcome UpdateConfigurationSetSendingEnabled(const Model::UpdateConfigurationSetSendingEnabledRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetSendingEnabled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetSendingEnabledOutcomeCallable UpdateConfigurationSetSendingEnabledCallable(const Model::UpdateConfigurationSetSendingEnabledRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationSetSendingEnabled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetSendingEnabledAsync(const Model::UpdateConfigurationSetSendingEnabledRequest& request, const UpdateConfigurationSetSendingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events. For information
         * about using custom domains, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Amazon
         * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetTrackingOptionsOutcome UpdateConfigurationSetTrackingOptions(const Model::UpdateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetTrackingOptionsOutcomeCallable UpdateConfigurationSetTrackingOptionsCallable(const Model::UpdateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetTrackingOptionsAsync(const Model::UpdateConfigurationSetTrackingOptionsRequest& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/custom-verification-emails.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcome UpdateCustomVerificationEmailTemplate(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcomeCallable UpdateCustomVerificationEmailTemplateCallable(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomVerificationEmailTemplateAsync(const Model::UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a receipt rule.</p> <p>For information about managing receipt rules,
         * see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReceiptRuleOutcome UpdateReceiptRule(const Model::UpdateReceiptRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateReceiptRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReceiptRuleOutcomeCallable UpdateReceiptRuleCallable(const Model::UpdateReceiptRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateReceiptRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReceiptRuleAsync(const Model::UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const Model::UpdateTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a set of DKIM tokens for a domain identity.</p>  <p>When
         * you execute the <code>VerifyDomainDkim</code> operation, the domain that you
         * specify is added to the list of identities that are associated with your
         * account. This is true even if you haven't already associated the domain with
         * your account by using the <code>VerifyDomainIdentity</code> operation. However,
         * you can't send email from the domain until you either successfully <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-domains.html">verify
         * it</a> or you successfully <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">set
         * up DKIM for it</a>.</p>  <p>You use the tokens that are generated by
         * this operation to create CNAME records. When Amazon SES detects that you've
         * added these records to the DNS configuration for a domain, you can start sending
         * email from that domain. You can start sending email even if you haven't added
         * the TXT record provided by the VerifyDomainIdentity operation to the DNS
         * configuration for your domain. All email that you send from the domain is
         * authenticated using DKIM.</p> <p>To create the CNAME records for DKIM
         * authentication, use the following values:</p> <ul> <li> <p> <b>Name</b>:
         * <i>token</i>._domainkey.<i>example.com</i> </p> </li> <li> <p> <b>Type</b>:
         * CNAME</p> </li> <li> <p> <b>Value</b>: <i>token</i>.dkim.amazonses.com</p> </li>
         * </ul> <p>In the preceding example, replace <i>token</i> with one of the tokens
         * that are generated when you execute this operation. Replace <i>example.com</i>
         * with your domain. Repeat this process for each token that's generated by this
         * operation.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkim">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainDkimOutcome VerifyDomainDkim(const Model::VerifyDomainDkimRequest& request) const;

        /**
         * A Callable wrapper for VerifyDomainDkim that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyDomainDkimOutcomeCallable VerifyDomainDkimCallable(const Model::VerifyDomainDkimRequest& request) const;

        /**
         * An Async wrapper for VerifyDomainDkim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyDomainDkimAsync(const Model::VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a domain to the list of identities for your Amazon SES account in the
         * current AWS Region and attempts to verify it. For more information about
         * verifying domains, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide.</i> </p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainIdentityOutcome VerifyDomainIdentity(const Model::VerifyDomainIdentityRequest& request) const;

        /**
         * A Callable wrapper for VerifyDomainIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyDomainIdentityOutcomeCallable VerifyDomainIdentityCallable(const Model::VerifyDomainIdentityRequest& request) const;

        /**
         * An Async wrapper for VerifyDomainIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyDomainIdentityAsync(const Model::VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a
         * new email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailAddressOutcome VerifyEmailAddress(const Model::VerifyEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for VerifyEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyEmailAddressOutcomeCallable VerifyEmailAddressCallable(const Model::VerifyEmailAddressRequest& request) const;

        /**
         * An Async wrapper for VerifyEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyEmailAddressAsync(const Model::VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current AWS region and attempts to verify it. As a result of executing
         * this operation, a verification email is sent to the specified address.</p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailIdentityOutcome VerifyEmailIdentity(const Model::VerifyEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for VerifyEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyEmailIdentityOutcomeCallable VerifyEmailIdentityCallable(const Model::VerifyEmailIdentityRequest& request) const;

        /**
         * An Async wrapper for VerifyEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyEmailIdentityAsync(const Model::VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SES
} // namespace Aws
