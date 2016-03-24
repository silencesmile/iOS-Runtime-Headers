/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSString *contentHashAtImport;
@property (nonatomic, retain) NSDate *modificationDateAtImport;
@property (nonatomic) short type;

+ (void)addLegacyTombstoneForFolder:(id)arg1;
+ (void)addLegacyTombstoneForNote:(id)arg1;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)allCloudObjects;
+ (id)allLegacyTombstones;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (BOOL)hasTombstonePrefix:(id)arg1;
+ (id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2;
+ (void)removeLegacyTombstoneForFolder:(id)arg1;
+ (void)removeLegacyTombstoneForNote:(id)arg1;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2;
+ (id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2;
+ (short)tombstoneTypeFromRecordName:(id)arg1;

- (void)deleteFromLocalDatabase;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isInICloudAccount;
- (id)loggingDescriptionValues;
- (void)mergeDataFromRecord:(id)arg1;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)recordType;
- (id)recordZoneID;
- (id)threadUnsafeNewlyCreatedRecord;

@end