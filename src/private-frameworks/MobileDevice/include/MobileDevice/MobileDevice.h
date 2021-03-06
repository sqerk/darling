/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _MobileDevice_H_
#define _MobileDevice_H_

#import <Foundation/Foundation.h>

#import <MobileDevice/MDRemoteServiceSupportProtocol.h>
#import <MobileDevice/NSURLConnectionDataDelegate.h>
#import <MobileDevice/NSURLConnectionDelegate.h>
#import <MobileDevice/NSURLSessionDelegate.h>
#import <MobileDevice/NSURLSessionStreamDelegate.h>
#import <MobileDevice/NSURLSessionTaskDelegate.h>
#import <MobileDevice/AMSupportURLConnectionDelegate.h>
#import <MobileDevice/AMSupportURLSession.h>
#import <MobileDevice/RPStream.h>
#import <MobileDevice/PersonalizedImage.h>

void* AFCConnectionClose(void);
void* AFCConnectionCopyLastErrorInfo(void);
void* AFCConnectionCreate(void);
void* AFCConnectionGetContext(void);
void* AFCConnectionGetFSBlockSize(void);
void* AFCConnectionGetIOTimeout(void);
void* AFCConnectionGetSecureContext(void);
void* AFCConnectionGetSocketBlockSize(void);
void* AFCConnectionGetStatus(void);
void* AFCConnectionGetTypeID(void);
void* AFCConnectionInvalidate(void);
void* AFCConnectionIsValid(void);
void* AFCConnectionOpen(void);
void* AFCConnectionProcessOperation(void);
void* AFCConnectionProcessOperations(void);
void* AFCConnectionScheduleWithRunLoop(void);
void* AFCConnectionSetCallBack(void);
void* AFCConnectionSetContext(void);
void* AFCConnectionSetDisposeSecureContextOnInvalidate(void);
void* AFCConnectionSetFSBlockSize(void);
void* AFCConnectionSetIOTimeout(void);
void* AFCConnectionSetSecureContext(void);
void* AFCConnectionSetSocketBlockSize(void);
void* AFCConnectionSubmitOperation(void);
void* AFCConnectionUnscheduleFromRunLoop(void);
void* AFCCopyErrorString(void);
void* AFCCopyPacketTypeString(void);
void* AFCDeviceInfoOpen(void);
void* AFCDirectoryClose(void);
void* AFCDirectoryCreate(void);
void* AFCDirectoryOpen(void);
void* AFCDirectoryRead(void);
void* AFCErrorString(void);
void* AFCFileDescriptorCreateCloseOperation(void);
void* AFCFileDescriptorCreateGetPositionOperation(void);
void* AFCFileDescriptorCreateLockOperation(void);
void* AFCFileDescriptorCreateReadAtPositionOperation(void);
void* AFCFileDescriptorCreateReadOperation(void);
void* AFCFileDescriptorCreateSetImmutableHintOperation(void);
void* AFCFileDescriptorCreateSetPositionOperation(void);
void* AFCFileDescriptorCreateSetSizeOperation(void);
void* AFCFileDescriptorCreateUnlockOperation(void);
void* AFCFileDescriptorCreateWriteAtPositionOperation(void);
void* AFCFileDescriptorCreateWriteOperation(void);
void* AFCFileDescriptorGetTypeID(void);
void* AFCFileDescriptorInvalidate(void);
void* AFCFileDescriptorIsValid(void);
void* AFCFileInfoOpen(void);
void* AFCFileRefClose(void);
void* AFCFileRefLock(void);
void* AFCFileRefOpen(void);
void* AFCFileRefRead(void);
void* AFCFileRefSeek(void);
void* AFCFileRefSetFileSize(void);
void* AFCFileRefTell(void);
void* AFCFileRefUnlock(void);
void* AFCFileRefWrite(void);
void* AFCGetClientVersionString(void);
void* AFCKeyValueClose(void);
void* AFCKeyValueRead(void);
void* AFCLinkPath(void);
void* AFCLog(void);
void* AFCOperationCopyPacketData(void);
void* AFCOperationCreateGetConnectionInfo(void);
void* AFCOperationCreateGetDeviceInfo(void);
void* AFCOperationCreateGetFileHash(void);
void* AFCOperationCreateGetFileHashWithRange(void);
void* AFCOperationCreateGetFileInfo(void);
void* AFCOperationCreateGetSizeOfPathContents(void);
void* AFCOperationCreateLinkPath(void);
void* AFCOperationCreateMakeDirectory(void);
void* AFCOperationCreateOpenFile(void);
void* AFCOperationCreatePacketHeaderDictionary(void);
void* AFCOperationCreateReadDirectory(void);
void* AFCOperationCreateRemovePath(void);
void* AFCOperationCreateRemovePathAndContents(void);
void* AFCOperationCreateRenamePath(void);
void* AFCOperationCreateSetConnectionOptions(void);
void* AFCOperationCreateSetModTime(void);
void* AFCOperationGetContext(void);
void* AFCOperationGetResultObject(void);
void* AFCOperationGetResultStatus(void);
void* AFCOperationGetState(void);
void* AFCOperationGetTypeID(void);
void* AFCOperationSetContext(void);
void* AFCPlatformInitialize(void);
void* AFCRemovePath(void);
void* AFCRenamePath(void);
void* AFCSetLogLevel(void);
void* AMAuthInstallApCopyImageTag(void);
void* AMAuthInstallApCreateImageProperties(void);
void* AMAuthInstallApCreatePersonalizedResponse(void);
void* AMAuthInstallApExtractZippedDeviceMap(void);
void* AMAuthInstallApImg4CopyPayloadType(void);
void* AMAuthInstallApImg4CreateServerRequestDictionary(void);
void* AMAuthInstallApImg4CreateStitchTicket(void);
void* AMAuthInstallApImg4ForceLocalSigning(void);
void* AMAuthInstallApImg4PersonalizeFile(void);
void* AMAuthInstallApImg4SetSepNonce(void);
void* AMAuthInstallApSetNonce(void);
void* AMAuthInstallApSetParameters(void);
void* AMAuthInstallCreate(void);
void* AMAuthInstallGetLocalizedStatusString(void);
void* AMAuthInstallLogSetHandler(void);
void* AMAuthInstallRequestSendSync(void);
void* AMAuthInstallSetSigningServerURL(void);
void* AMAuthInstallSsoEnable(void);
void* AMAuthInstallSsoInitialize(void);
void* AMAuthInstallSupportCompareStringToInt32(void);
void* AMAuthInstallSupportCopyDataFromHexString(void);
void* AMAuthInstallSupportCopyURLToNewTempDirectory(void);
void* AMAuthInstallSupportCreateDataFromFileURL(void);
void* AMAuthInstallSupportCreateDictionaryFromFileURL(void);
void* AMAuthInstallSupportDictionarySetBoolean(void);
void* AMAuthInstallSupportDictionarySetInteger32(void);
void* AMAuthInstallSupportDictionarySetInteger64(void);
void* AMAuthInstallSupportFileURLExists(void);
void* AMAuthInstallSupportGetLibraryVersionString(void);
void* AMAuthInstallSupportMakeDirectory(void);
void* AMDCopyArrayOfDevicesMatchingQuery(void);
void* AMDCopyAuthenticationIdentityForDevice(void);
void* AMDCopyErrorText(void);
void* AMDCopySystemBonjourUniqueID(void);
void* AMDCopyUDIDForPairingIdentity(void);
void* AMDCreateDeviceList(void);
void* AMDErrorForMobileInstallationCallbackDict(void);
void* AMDErrorString(void);
void* AMDFUModeDeviceCopyAPNonce(void);
void* AMDFUModeDeviceCopyAuthInstallPreflightOptions(void);
void* AMDFUModeDeviceCopyBoardConfig(void);
void* AMDFUModeDeviceCopyEcid(void);
void* AMDFUModeDeviceCopySEPNonce(void);
void* AMDFUModeDeviceGetBoardID(void);
void* AMDFUModeDeviceGetChipID(void);
void* AMDFUModeDeviceGetECID(void);
void* AMDFUModeDeviceGetEffectiveProductionMode(void);
void* AMDFUModeDeviceGetEffectiveSecurityMode(void);
void* AMDFUModeDeviceGetImage4Aware(void);
void* AMDFUModeDeviceGetLocationID(void);
void* AMDFUModeDeviceGetOperation(void);
void* AMDFUModeDeviceGetProductID(void);
void* AMDFUModeDeviceGetProductType(void);
void* AMDFUModeDeviceGetProductionMode(void);
void* AMDFUModeDeviceGetProgress(void);
void* AMDFUModeDeviceGetSecurityDomain(void);
void* AMDFUModeDeviceGetSecurityEpoch(void);
void* AMDFUModeDeviceGetSecurityMode(void);
void* AMDFUModeDeviceGetTypeID(void);
void* AMDFUModeDeviceIsBootstrapOnly(void);
void* AMDFUModeDeviceRequestAbbreviatedSendSync(void);
void* AMDFUModeDeviceResetAuthInstallSettings(void);
void* AMDGetBundleVersion(void);
void* AMDGetPairingRecordDirectoryPath(void);
void* AMDListenForNotifications(void);
void* AMDObserveNotification(void);
void* AMDPostNotification(void);
void* AMDSecureListenForNotifications(void);
void* AMDSecureListenForNotificationsWithRetainedContext(void);
void* AMDSecureObserveNotification(void);
void* AMDSecurePostNotification(void);
void* AMDSecureShutdownNotificationProxy(void);
void* AMDServiceConnectionBufferedReadSize(void);
void* AMDServiceConnectionCreate(void);
void* AMDServiceConnectionGetSecureIOContext(void);
void* AMDServiceConnectionGetSocket(void);
void* AMDServiceConnectionGetTypeID(void);
void* AMDServiceConnectionInvalidate(void);
void* AMDServiceConnectionReceive(void);
void* AMDServiceConnectionReceiveMessage(void);
void* AMDServiceConnectionSend(void);
void* AMDServiceConnectionSendMessage(void);
void* AMDServiceConnectionSetDevice(void);
void* AMDServiceConnectionSetServiceName(void);
void* AMDSetLogLevel(void);
void* AMDShutdownNotificationProxy(void);
void* AMDeviceActivate(void);
void* AMDeviceActivateWithOptions(void);
void* AMDeviceArchiveApplication(void);
void* AMDeviceCheckCapabilitiesMatch(void);
void* AMDeviceConnect(void);
void* AMDeviceCopyAuthInstallPreflightOptions(void);
void* AMDeviceCopyDeviceIdentifier(void);
void* AMDeviceCopyDeviceLocation(void);
void* AMDeviceCopyDeviceUSBSerialNumber(void);
void* AMDeviceCopyFDRPreflightOptions(void);
void* AMDeviceCopyMultipleValuesWithError(void);
void* AMDeviceCopyPairedCompanion(void);
void* AMDeviceCopyPairedWatch(void);
void* AMDeviceCopyPersonalizationNonce(void);
void* AMDeviceCopyPersonalizationNonceBridgeOS(void);
void* AMDeviceCopyProvisioningProfiles(void);
void* AMDeviceCopyValue(void);
void* AMDeviceCopyValueWithError(void);
void* AMDeviceCreate(void);
void* AMDeviceCreateActivationInfo(void);
void* AMDeviceCreateActivationInfoWithOptions(void);
void* AMDeviceCreateActivationSessionInfo(void);
void* AMDeviceCreateCopy(void);
void* AMDeviceCreateFromProperties(void);
void* AMDeviceCreateHouseArrestService(void);
void* AMDeviceCreateSRPConnection(void);
void* AMDeviceCreateWakeupToken(void);
void* AMDeviceDeactivate(void);
void* AMDeviceDeleteHostPairingRecordForUDID(void);
void* AMDeviceDisconnect(void);
void* AMDeviceEnterRecovery(void);
void* AMDeviceExtendedPairWithOptions(void);
void* AMDeviceGetConnectionID(void);
void* AMDeviceGetInterfaceSpeed(void);
void* AMDeviceGetInterfaceType(void);
void* AMDeviceGetLocalOrRemoteOffsetToResume(void);
void* AMDeviceGetName(void);
void* AMDeviceGetTypeID(void);
void* AMDeviceGetUserInfo(void);
void* AMDeviceGetWirelessBuddyFlags(void);
void* AMDeviceImageMounted(void);
void* AMDeviceImageMountedBridgeOS(void);
void* AMDeviceImageMountedMacOS(void);
void* AMDeviceInstallApplication(void);
void* AMDeviceInstallProvisioningProfile(void);
void* AMDeviceIsAtLeastVersionOnPlatform(void);
void* AMDeviceIsPaired(void);
void* AMDeviceIsValid(void);
void* AMDeviceIsWiFiPairableRef(void);
void* AMDeviceLookupApplicationArchives(void);
void* AMDeviceLookupApplications(void);
void* AMDeviceMountImage(void);
void* AMDeviceMountImageBridgeOS(void);
void* AMDeviceMountImageMacOS(void);
void* AMDeviceMountImageOnHost(void);
void* AMDeviceMountPersonalizedBundle(void);
void* AMDeviceMountPersonalizedBundleBridgeOS(void);
void* AMDeviceNotificationSubscribe(void);
void* AMDeviceNotificationSubscribeWithOptions(void);
void* AMDeviceNotificationUnsubscribe(void);
void* AMDevicePair(void);
void* AMDevicePairWithCallback(void);
void* AMDevicePairWithOptions(void);
void* AMDevicePowerAssertionCreate(void);
void* AMDevicePowerAssertionGetTypeID(void);
void* AMDevicePreflightOperationCreate(void);
void* AMDevicePreflightOperationGetRunLoopSource(void);
void* AMDevicePreflightOperationGetTypeID(void);
void* AMDevicePreflightOperationInvalidate(void);
void* AMDeviceRegisterForCUNotificationsWithOptions(void);
void* AMDeviceRegisterForCUStateNotificationsWithOptions(void);
void* AMDeviceRelayFile(void);
void* AMDeviceRelease(void);
void* AMDeviceRemoveApplicationArchive(void);
void* AMDeviceRemoveProvisioningProfile(void);
void* AMDeviceRemoveValue(void);
void* AMDeviceRequestAbbreviatedSendSync(void);
void* AMDeviceRestoreApplication(void);
void* AMDeviceRetain(void);
void* AMDeviceSecureArchiveApplication(void);
void* AMDeviceSecureCheckCapabilitiesMatch(void);
void* AMDeviceSecureInstallApplication(void);
void* AMDeviceSecureInstallApplicationBundle(void);
void* AMDeviceSecureRemoveApplicationArchive(void);
void* AMDeviceSecureRestoreApplication(void);
void* AMDeviceSecureStartService(void);
void* AMDeviceSecureTransferPath(void);
void* AMDeviceSecureUninstallApplication(void);
void* AMDeviceSecureUpgradeApplication(void);
void* AMDeviceSetUserInfo(void);
void* AMDeviceSetValue(void);
void* AMDeviceSetWirelessBuddyFlags(void);
void* AMDeviceStartHouseArrestService(void);
void* AMDeviceStartService(void);
void* AMDeviceStartServiceWithOptions(void);
void* AMDeviceStartSession(void);
void* AMDeviceStopSession(void);
void* AMDeviceTransferApplication(void);
void* AMDeviceTransferPath(void);
void* AMDeviceUSBDeviceID(void);
void* AMDeviceUSBLocationID(void);
void* AMDeviceUSBProductID(void);
void* AMDeviceUninstallApplication(void);
void* AMDeviceUnmountImageOnHost(void);
void* AMDeviceUnpair(void);
void* AMDeviceUpgradeApplication(void);
void* AMDeviceValidatePairing(void);
void* AMDeviceVerifySRPConnection(void);
void* AMDeviceWakeupOperationCreateWithToken(void);
void* AMDeviceWakeupOperationGetTypeID(void);
void* AMDeviceWakeupOperationInvalidate(void);
void* AMDeviceWakeupOperationSchedule(void);
void* AMDeviceWakeupUsingToken(void);
void* AMRAuthInstallCopyLocalizedStringForServerError(void);
void* AMRAuthInstallCopyPreflightOptions(void);
void* AMRAuthInstallCreateOptionsForBootstrapDevice(void);
void* AMRAuthInstallFinalize(void);
void* AMRAuthInstallPreflight(void);
void* AMRLocalizedCopyStringForAMRError(void);
void* AMRLocalizedCopyStringForAMROperation(void);
void* AMRLog(void);
void* AMRLogv(void);
void* AMRecoveryModeDeviceCopyAPNonce(void);
void* AMRecoveryModeDeviceCopyAuthInstallPreflightOptions(void);
void* AMRecoveryModeDeviceCopyBoardConfig(void);
void* AMRecoveryModeDeviceCopyEcid(void);
void* AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice(void);
void* AMRecoveryModeDeviceCopyIMEI(void);
void* AMRecoveryModeDeviceCopySEPNonce(void);
void* AMRecoveryModeDeviceCopySerialNumber(void);
void* AMRecoveryModeDeviceCreateWithIOService(void);
void* AMRecoveryModeDeviceGetBoardID(void);
void* AMRecoveryModeDeviceGetChipID(void);
void* AMRecoveryModeDeviceGetECID(void);
void* AMRecoveryModeDeviceGetEffectiveProductionMode(void);
void* AMRecoveryModeDeviceGetEffectiveSecurityMode(void);
void* AMRecoveryModeDeviceGetLocationID(void);
void* AMRecoveryModeDeviceGetProductID(void);
void* AMRecoveryModeDeviceGetProductType(void);
void* AMRecoveryModeDeviceGetProductionMode(void);
void* AMRecoveryModeDeviceGetProgress(void);
void* AMRecoveryModeDeviceGetSecurityEpoch(void);
void* AMRecoveryModeDeviceGetSecurityMode(void);
void* AMRecoveryModeDeviceGetSupportedImageFormat(void);
void* AMRecoveryModeDeviceGetTypeID(void);
void* AMRecoveryModeDeviceIsBootstrapOnly(void);
void* AMRecoveryModeDeviceReboot(void);
void* AMRecoveryModeDeviceRequestAbbreviatedSendSync(void);
void* AMRecoveryModeDeviceSendBlindCommandToDevice(void);
void* AMRecoveryModeDeviceSendCommandToDevice(void);
void* AMRecoveryModeDeviceSendFileToDevice(void);
void* AMRecoveryModeDeviceSetAutoBoot(void);
void* AMRecoveryModeGetSoftwareBuildVersion(void);
void* AMRestorableAttemptMuxRegistration(void);
void* AMRestorableBuildCopyRestoreBundleURL(void);
void* AMRestorableBuildCopySupportedBoardConfigs(void);
void* AMRestorableBuildCopySupportedVariants(void);
void* AMRestorableBuildCreate(void);
void* AMRestorableCommitStashBag(void);
void* AMRestorableCommitStashBagWithManifest(void);
void* AMRestorableCommitStashBagWithRestoreOptions(void);
void* AMRestorableDeviceCopyAMDevice(void);
void* AMRestorableDeviceCopyAuthInstallPreflightOptions(void);
void* AMRestorableDeviceCopyBoardConfig(void);
void* AMRestorableDeviceCopyDFUModeDevice(void);
void* AMRestorableDeviceCopyDefaultRestoreOptions(void);
void* AMRestorableDeviceCopyEnvironmentVariable(void);
void* AMRestorableDeviceCopyMDRemoteServiceDevice(void);
void* AMRestorableDeviceCopyProductString(void);
void* AMRestorableDeviceCopyRecoveryModeDevice(void);
void* AMRestorableDeviceCopyRestoreModeDevice(void);
void* AMRestorableDeviceCopyRestoreOptionsFromDocument(void);
void* AMRestorableDeviceCopySerialDevicePath(void);
void* AMRestorableDeviceCopySerialDeviceSWDName(void);
void* AMRestorableDeviceCopySerialNumber(void);
void* AMRestorableDeviceCopyUserFriendlyName(void);
void* AMRestorableDeviceCreateFromAMDevice(void);
void* AMRestorableDeviceEnableExtraDFUDevices(void);
void* AMRestorableDeviceGetBoardID(void);
void* AMRestorableDeviceGetChipID(void);
void* AMRestorableDeviceGetDFUModeDevice(void);
void* AMRestorableDeviceGetDeviceClass(void);
void* AMRestorableDeviceGetDeviceMapEntryForBoardAndChipID(void);
void* AMRestorableDeviceGetECID(void);
void* AMRestorableDeviceGetFusingInfo(void);
void* AMRestorableDeviceGetLocationID(void);
void* AMRestorableDeviceGetProductID(void);
void* AMRestorableDeviceGetProductType(void);
void* AMRestorableDeviceGetRecoveryModeDevice(void);
void* AMRestorableDeviceGetRestoreOperationsQueue(void);
void* AMRestorableDeviceGetState(void);
void* AMRestorableDeviceGetTypeID(void);
void* AMRestorableDeviceIsInDeviceClass(void);
void* AMRestorableDeviceNeedsUpdatedFramework(void);
void* AMRestorableDeviceRegisterForNotifications(void);
void* AMRestorableDeviceRegisterForNotificationsForDevices(void);
void* AMRestorableDeviceRestore(void);
void* AMRestorableDeviceRestoreWithError(void);
void* AMRestorableDeviceSendBlindCommand(void);
void* AMRestorableDeviceSendCommand(void);
void* AMRestorableDeviceSendFile(void);
void* AMRestorableDeviceSetLogFileURL(void);
void* AMRestorableDeviceSetProxyCredentialsCallback(void);
void* AMRestorableDeviceTriggerUpdateForBoardAndChipIDWithPrompt(void);
void* AMRestorableDeviceTriggerUpdateForDeviceWithPrompt(void);
void* AMRestorableDeviceUnregisterForNotifications(void);
void* AMRestorableDeviceUpdateAvailableForBoardAndChipID(void);
void* AMRestorableDeviceUpdateAvailableForDevice(void);
void* AMRestorableEnableLogStreaming(void);
void* AMRestorableGetCheckpointData(void);
void* AMRestorableGetIdentifyingErrorCode(void);
void* AMRestorableLogToFile(void);
void* AMRestorablePersonalizeCopyManifestTag(void);
void* AMRestorablePersonalizeSendFile(void);
void* AMRestorableSetCheckpointData(void);
void* AMRestorableSetGlobalLocationIDFilter(void);
void* AMRestorableSetGlobalLogFileURL(void);
void* AMRestorableSetLogLevel(void);
void* AMRestoreCopyNormalizedBoardConfig(void);
void* AMRestoreCopySystemRestoreImagePath(void);
void* AMRestoreCreateBootArgsByAddingArg(void);
void* AMRestoreCreateBootArgsByRemovingArg(void);
void* AMRestoreCreateDefaultOptions(void);
void* AMRestoreCreatePathsForBundle(void);
void* AMRestoreDeviceGetFwImages(void);
void* AMRestoreDisableFileLogging(void);
void* AMRestoreEnableExtraDFUDevices(void);
void* AMRestoreEnableFileLogging(void);
void* AMRestoreGetSupportedPayloadVersion(void);
void* AMRestoreLogFilePaths(void);
void* AMRestoreModeCopyDeviceInfo(void);
void* AMRestoreModeDeviceCopyBoardConfig(void);
void* AMRestoreModeDeviceCopyEcid(void);
void* AMRestoreModeDeviceCopyIMEI(void);
void* AMRestoreModeDeviceCopyMarketingPartNumber(void);
void* AMRestoreModeDeviceCopyRestoreLog(void);
void* AMRestoreModeDeviceCopySerialNumber(void);
void* AMRestoreModeDeviceCreate(void);
void* AMRestoreModeDeviceGetDeviceID(void);
void* AMRestoreModeDeviceGetLocationID(void);
void* AMRestoreModeDeviceGetProgress(void);
void* AMRestoreModeDeviceGetTypeID(void);
void* AMRestoreModeDeviceReboot(void);
void* AMRestoreModeGetLastFailureLog(void);
void* AMRestorePerformDFURestore(void);
void* AMRestorePerformRecoveryModeRestore(void);
void* AMRestorePerformRestoreModeRestore(void);
void* AMRestorePerformRestoreModeRestoreWithError(void);
void* AMRestoreRegisterForDeviceNotifications(void);
void* AMRestoreScrubLogs(void);
void* AMRestoreSetLogLevel(void);
void* AMRestoreUnregisterForDeviceNotifications(void);
void* AMRestoreUseFactoryLoggingFormat(void);
void* AMSArchiveBackup(void);
void* AMSBackupWithOptions(void);
void* AMSBeginSync(void);
void* AMSBeginSyncForDataClasses(void);
void* AMSCancelBackupRestore(void);
void* AMSCancelCrashReportCopy(void);
void* AMSCancelSync(void);
void* AMSChangeBackupPassword(void);
void* AMSCleanup(void);
void* AMSClearDataClasses(void);
void* AMSConnectToCrashReportCopyTarget(void);
void* AMSCopyApplicationListFromBackup(void);
void* AMSCopyCrashReportPath(void);
void* AMSCopyCrashReportsFromTarget(void);
void* AMSCopySourcesForRestoreCompatibleWith(void);
void* AMSDisconnectFromCrashReportCopyTarget(void);
void* AMSEnableCloudBackup(void);
void* AMSEnableSyncServices(void);
void* AMSEraseDevice(void);
void* AMSGetBackupInfo(void);
void* AMSGetBackupPasswordFromKeychainForTarget(void);
void* AMSGetCalendarDayLimit(void);
void* AMSGetClientIdentifierAndDisplayNameForTarget(void);
void* AMSGetCollectionsForDataClassName(void);
void* AMSGetCrashReportCopyPreferencesForTarget(void);
void* AMSGetDataClassInfoForTarget(void);
void* AMSGetLastSyncDateForDataClass(void);
void* AMSGetNewRecordCalendarName(void);
void* AMSGetNewRecordGroupName(void);
void* AMSGetNumberOfCrashReportsToCopy(void);
void* AMSGetNumberOfCrashReportsToSubmit(void);
void* AMSGetSourcesForRestore(void);
void* AMSGetSupportedDataClassNames(void);
void* AMSInitialize(void);
void* AMSIsSyncServicesEnabled(void);
void* AMSProcessLinkExitChild(void);
void* AMSProcessLinkInitializeChild(void);
void* AMSProcessLinkInvalidate(void);
void* AMSProcessLinkReadMessageFromChild(void);
void* AMSProcessLinkRelease(void);
void* AMSProcessLinkRetain(void);
void* AMSProcessLinkRunChild(void);
void* AMSProcessLinkSendMessage(void);
void* AMSProcessLinkSendMessageAsync(void);
void* AMSProcessLinkSendMessageLock(void);
void* AMSProcessLinkSendMessageToParent(void);
void* AMSRegisterClientWithTargetIdentifierAndDisplayName(void);
void* AMSResetSyncData(void);
void* AMSRestoreWithApplications(void);
void* AMSSetBackupPasswordInKeychain(void);
void* AMSSetCalendarDayLimit(void);
void* AMSSetCrashReportCopyPreferencesForTarget(void);
void* AMSSetDataClassInfoForTarget(void);
void* AMSSetFilteredCollectionNamesForDataClassName(void);
void* AMSSetNewRecordCalendarName(void);
void* AMSSetNewRecordGroupName(void);
void* AMSSubmitCrashReportsFromTarget(void);
void* AMSSubmitRestoreLogFromPath(void);
void* AMSUnregisterTarget(void);
void* AMSupportCreateDataFromFileURL(void);
void* AMSupportCreateDigest(void);
void* AMSupportCreateErrorInternal(void);
void* AMSupportCreateURLFromString(void);
void* AMSupportHttpCreateDataFromURL(void);
void* AMSupportSafeFree(void);
void* AMSupportSafeRelease(void);
void* AMSupportWriteDataToFileURL(void);
void* ASRServerHandleConnection(void);
void* ASRServerHandleSlurp(void);
void* DERDecodeItemPartialBuffer(void);
void* DERParseInteger(void);
void* MDRemoteServiceDeviceGetPropertyDictionary(void);
void* MDRemoteServiceDeviceGetTypeID(void);
void* MISCopyErrorStringForErrorCode(void);
void* MISProfileCopyPayload(void);
void* MISProfileCopySignerSubjectSummary(void);
void* MISProfileCreate(void);
void* MISProfileCreateDataRepresentation(void);
void* MISProfileCreateForProvisioning(void);
void* MISProfileCreateMutableCopy(void);
void* MISProfileCreateWithData(void);
void* MISProfileCreateWithFile(void);
void* MISProfileGetTypeID(void);
void* MISProfileGetValue(void);
void* MISProfileIsMutable(void);
void* MISProfileRemoveValue(void);
void* MISProfileSetPayload(void);
void* MISProfileSetValue(void);
void* MISProfileSignWithKeyAndCertificates(void);
void* MISProfileSignWithRSACallBack(void);
void* MISProfileValidateSignature(void);
void* MISProfileValidateSignatureWithAnchors(void);
void* MISProfileValidateSignatureWithAnchorsAndPolicy(void);
void* MISProfileWriteToFile(void);
void* MISProvisioningProfileAddDeveloperCertificate(void);
void* MISProvisioningProfileAddEntitlement(void);
void* MISProvisioningProfileAddProvisionedDevice(void);
void* MISProvisioningProfileCheckValidity(void);
void* MISProvisioningProfileCopyApplicationIdentifierPrefixes(void);
void* MISProvisioningProfileCreateMutableCopy(void);
void* MISProvisioningProfileGetCreationDate(void);
void* MISProvisioningProfileGetDeveloperCertificates(void);
void* MISProvisioningProfileGetEntitlements(void);
void* MISProvisioningProfileGetExpirationDate(void);
void* MISProvisioningProfileGetName(void);
void* MISProvisioningProfileGetProvisionedDevices(void);
void* MISProvisioningProfileGetTeamIdentifier(void);
void* MISProvisioningProfileGetUUID(void);
void* MISProvisioningProfileGetVersion(void);
void* MISProvisioningProfileGrantsEntitlement(void);
void* MISProvisioningProfileIncludesDevice(void);
void* MISProvisioningProfileIncludesPlatform(void);
void* MISProvisioningProfileIsAppleInternalProfile(void);
void* MISProvisioningProfileIsForLocalProvisioning(void);
void* MISProvisioningProfileProvisionsAllDevices(void);
void* MISProvisioningProfileSetApplicationIdentifierPrefixes(void);
void* MISProvisioningProfileSetDeveloperCertificates(void);
void* MISProvisioningProfileSetName(void);
void* MISProvisioningProfileSetProvisionsAllDevices(void);
void* MISProvisioningProfileSetTimeToLive(void);
void* MISProvisioningProfileValidateSignature(void);
void* ProcessLinkSetupParent(void);
void* RCGetSystemPartitionExtrasSizeForDevice(void);
void* RPCreateSocksProxyForDeviceRef(void);
void* RPSocksProxyInvalidate(void);
void* RPSocksProxySetDoneCallback(void);
void* RPSocksProxyStart(void);
void* RestoreCheckpointCreateCheckpointFingerprint(void);
void* RestoreCheckpointDataCreate(void);
void* RestoreCheckpointGetCheckpointStatements(void);
void* RestoreCheckpointGetCheckpointWarnings(void);
void* RestoreCheckpointGetLastCheckpointError(void);
void* RestoreCheckpointGetLastCheckpointID(void);
void* RestoreCheckpointGetLastCheckpointResult(void);
void* SZArchiverConvertZipArchiveToStreamable(void);
void* SZArchiverCreateStreamableZip(void);
void* SZArchiverExtractFile(void);
void* SZConduitSendPath(void);
void* SZConduitSendPathWithPreflight(void);
void* USBMuxConnectByPort(void);
void* USBMuxCopyDeviceArray(void);
void* USBMuxListenForDevices(void);
void* USBMuxListenerClose(void);
void* USBMuxListenerCreate(void);
void* USBMuxListenerCreateFiltered(void);
void* USBMuxListenerGetRunLoopSource(void);
void* USBMuxListenerSetDebug(void);
void* _AMRestorableDeviceCopyBoardConfigNoLocking(void);
void* _AMRestorableDeviceGetECIDNoLocking(void);
void* _AMRestorableDeviceGetLocationIDNoLocking(void);
void* _AMRestorableDeviceGetProxy(void);
void* _AMRestorableDeviceSendBlindCommandNoLocking(void);
void* _AMRestorableDeviceSendCommandNoLocking(void);
void* _AMRestorableDeviceSendFileNoLocking(void);
void* _AMRestorableGetEventQueue(void);
void* _AMRestorableGetStateForString(void);
void* _AMRestorableGetStringForState(void);
void* _AMSGetErrorReasonForErrorCode(void);
void* _CreateBonjourDeviceDescriptions(void);
void* _FinalizeMobileDevice(void);
void* _InitializeMobileDevice(void);
void* _ensureDirectoryExists(void);
void* _logData(void);
void* _readDictionary(void);
void* _runBackupTool(void);
void* _sendMessage(void);
void* _writeDictionary(void);

#endif
