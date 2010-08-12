/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_VSS
#define _INC_VSS

/* http://msdn.microsoft.com/en-us/library/aa384641%28VS.85%29.aspx */
typedef WCHAR *VSS_PWSZ;
typedef LONGLONG VSS_TIMESTAMP;
typedef GUID VSS_ID;

#if (_WIN32_WINNT >= 0x0600)

typedef enum VSS_BACKUP_SCHEMA {
  VSS_BS_UNDEFINED                            = 0x00000000,
  VSS_BS_DIFFERENTIAL                         = 0x00000001,
  VSS_BS_INCREMENTAL                          = 0x00000002,
  VSS_BS_EXCLUSIVE_INCREMENTAL_DIFFERENTIAL   = 0x00000004,
  VSS_BS_LOG                                  = 0x00000008,
  VSS_BS_COPY                                 = 0x00000010,
  VSS_BS_TIMESTAMPED                          = 0x00000020,
  VSS_BS_LAST_MODIFY                          = 0x00000040,
  VSS_BS_LSN                                  = 0x00000080,
  VSS_BS_WRITER_SUPPORTS_NEW_TARGET           = 0x00000100,
  VSS_BS_WRITER_SUPPORTS_RESTORE_WITH_MOVE    = 0x00000200,
  VSS_BS_INDEPENDENT_SYSTEM_STATE             = 0x00000400,
  VSS_BS_ROLLFORWARD_RESTORE                  = 0x00001000,
  VSS_BS_RESTORE_RENAME                       = 0x00002000,
  VSS_BS_AUTHORITATIVE_RESTORE                = 0x00004000,
  VSS_BS_WRITER_SUPPORTS_PARALLEL_RESTORES    = 0x00008000 
} VSS_BACKUP_SCHEMA, *PVSS_BACKUP_SCHEMA;

typedef enum _VSS_FILE_SPEC_BACKUP_TYPE {
  VSS_FSBT_FULL_BACKUP_REQUIRED             = 0x00000001,
  VSS_FSBT_DIFFERENTIAL_BACKUP_REQUIRED     = 0x00000002,
  VSS_FSBT_INCREMENTAL_BACKUP_REQUIRED      = 0x00000004,
  VSS_FSBT_LOG_BACKUP_REQUIRED              = 0x00000008,
  VSS_FSBT_FULL_SNAPSHOT_REQUIRED           = 0x00000100,
  VSS_FSBT_DIFFERENTIAL_SNAPSHOT_REQUIRED   = 0x00000200,
  VSS_FSBT_INCREMENTAL_SNAPSHOT_REQUIRED    = 0x00000400,
  VSS_FSBT_LOG_SNAPSHOT_REQUIRED            = 0x00000800,
  VSS_FSBT_ALL_BACKUP_REQUIRED              = 0x0000000F,
  VSS_FSBT_ALL_SNAPSHOT_REQUIRED            = 0x00000F00 
} VSS_FILE_SPEC_BACKUP_TYPE, *PVSS_FILE_SPEC_BACKUP_TYPE;

typedef enum _VSS_RESTORE_TYPE {
  VSS_RTYPE_UNDEFINED   = 0,
  VSS_RTYPE_BY_COPY     = 1,
  VSS_RTYPE_IMPORT      = 2,
  VSS_RTYPE_OTHER       = 3 
} VSS_RESTORE_TYPE, *PVSS_RESTORE_TYPE;

typedef enum _VSS_ROLLFORWARD_TYPE {
  VSS_RF_UNDEFINED   = 0,
  VSS_RF_NONE        = 1,
  VSS_RF_ALL         = 2,
  VSS_RF_PARTIAL     = 3 
} VSS_ROLLFORWARD_TYPE, *PVSS_ROLLFORWARD_TYPE;

#endif /*(_WIN32_WINNT >= 0x0600)*/
#endif /*_INC_VSS*/
