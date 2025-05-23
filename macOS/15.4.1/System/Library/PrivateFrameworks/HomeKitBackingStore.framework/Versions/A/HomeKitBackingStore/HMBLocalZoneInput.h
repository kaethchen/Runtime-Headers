@class NSString, HMBLocalZone, HMBLocalSQLContextInputBlock;

@interface HMBLocalZoneInput : HMFObject <HMFLogging>

@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMBLocalSQLContextInputBlock *inputBlock;
@property unsigned long long stagedChangesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)abort;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)commitWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLocalZone:(id)a0 inputBlock:(id)a1;
- (BOOL)stageRemovalForModelWithID:(id)a0 error:(id *)a1;

@end
