﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/StorageClassAnalysisDataExport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Specifies data related to access patterns to be collected and made available
   * to analyze the tradeoffs between different storage classes for an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/StorageClassAnalysis">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API StorageClassAnalysis
  {
  public:
    StorageClassAnalysis();
    StorageClassAnalysis(const Aws::Utils::Xml::XmlNode& xmlNode);
    StorageClassAnalysis& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline const StorageClassAnalysisDataExport& GetDataExport() const{ return m_dataExport; }

    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline bool DataExportHasBeenSet() const { return m_dataExportHasBeenSet; }

    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline void SetDataExport(const StorageClassAnalysisDataExport& value) { m_dataExportHasBeenSet = true; m_dataExport = value; }

    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline void SetDataExport(StorageClassAnalysisDataExport&& value) { m_dataExportHasBeenSet = true; m_dataExport = std::move(value); }

    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline StorageClassAnalysis& WithDataExport(const StorageClassAnalysisDataExport& value) { SetDataExport(value); return *this;}

    /**
     * <p>Specifies how data related to the storage class analysis for an Amazon S3
     * bucket should be exported.</p>
     */
    inline StorageClassAnalysis& WithDataExport(StorageClassAnalysisDataExport&& value) { SetDataExport(std::move(value)); return *this;}

  private:

    StorageClassAnalysisDataExport m_dataExport;
    bool m_dataExportHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
