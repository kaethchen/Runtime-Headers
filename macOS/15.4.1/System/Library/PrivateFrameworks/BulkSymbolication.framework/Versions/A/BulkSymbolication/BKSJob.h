@class NSUUID, NSURLCredential, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSObject, BKSAppleConnectCredentials;
@protocol OS_dispatch_queue;

@interface BKSJob : NSObject

@property (readonly) NSUUID *uuid;
@property unsigned char state;
@property (readonly, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) NSMutableArray *dataTasks;
@property (readonly, nonatomic) unsigned long long currentDataTaskIndex;
@property (readonly, nonatomic) NSArray *symbolicationRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, nonatomic) NSMutableDictionary *perUUIDSymbolicationRequests;
@property (readonly, nonatomic) NSMutableDictionary *dyldSharedCacheLayoutRequests;
@property (retain, nonatomic) NSURLCredential *odCredentials;
@property (retain, nonatomic) BKSAppleConnectCredentials *acCredentials;
@property (nonatomic) BOOL needsSegmentInfo;
@property (readonly, nonatomic) BOOL shouldReadFromKeychain;
@property (readonly, nonatomic) id /* block */ credentialsCachingBlock;
@property (readonly, nonatomic) NSMutableDictionary *uuidToSymbolOwnerDict;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) NSMutableDictionary *dyldSharedCacheLayoutResults;
@property (nonatomic) BOOL force3rdPartySymbolication;
@property (readonly, nonatomic) BOOL _shouldPerformThirdPartySymbolication;
@property (copy, nonatomic) id /* block */ odCredentialProvidingBlock;
@property (copy, nonatomic) id /* block */ acCredentialBlock;
@property (readonly, nonatomic) double timeoutInSec;
@property (readonly, nonatomic) NSString *groupName;
@property (nonatomic) unsigned long long reachabilityTimeoutInSec;

+ (BOOL)symbolicationEndPointIsReachableWithTimeout:(unsigned long long)a0 errorOut:(id *)a1;
+ (id)_speedTracerProtectionSpace;
+ (BOOL)_thirdPartySymbolicationDefaultIsSet;

- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (void)addRequest:(id)a0;
- (void)addDyldSharedCacheLayoutRequest:(id)a0;
- (void)addRequestForSymbolOwnerUUID:(id)a0 offsetIntoSymbolOwner:(unsigned long long)a1;
- (void)addRequestForSymbolOwnerUUID:(id)a0 segmentName:(id)a1 offsetIntoSegment:(unsigned long long)a2;
- (id)initWithGroupName:(id)a0 timeoutInSec:(double)a1 shouldReadFromKeychain:(BOOL)a2 resultCollectionCompletionBlock:(id /* block */)a3;
- (void)_addDataTask:(id)a0;
- (void)_addDataTaskOnSyncQueue:(id)a0;
- (id)_generateJSONDataForDyldSharedCacheLayoutRequestsWithError:(id *)a0;
- (id)_generateJSONPayloadsForRequests:(id)a0;
- (BOOL)_handleDyldSharedCacheLayoutResponsePayload:(id)a0 response:(id)a1 error:(id)a2;
- (void)_handleFollowUpResponsePayload:(id)a0 UUIDToSymbolOwner:(id)a1 response:(id)a2 error:(id)a3;
- (id)_handleInitialResponsePayload:(id)a0 response:(id)a1 outFollowUpRequestsJSONDataObjects:(id *)a2 error:(id)a3;
- (id)_handleResponseCorrectness:(id)a0 data:(id)a1 error:(id)a2;
- (id)_initialQueryJSONObjectWithError:(id *)a0;
- (void)_invokeCompletionBlockAsyncWithError:(id)a0;
- (void)_invokeCompletionBlockWithError:(id)a0;
- (void)_invokeCompletionBlockWithResultCollection:(id)a0 error:(id)a1;
- (id)_mutableRequestWithJSONData:(id)a0 withTimeout:(double)a1;
- (id)_newBoundaryString;
- (id)_nextDataTask;
- (id)_nextDataTaskOnSyncQueue;
- (BOOL)_preFlightBKSJob;
- (void)_processSymbolsPayload:(id)a0 uuidToSymbolOwnerDict:(id)a1;
- (id)_queryJSONObjectsWithSymbolOwners:(id)a0 error:(id *)a1;
- (id)_resultsForSymbolPayload:(id)a0 uuidToSymbolOwnerDict:(id)a1;
- (BOOL)_setUpCredentialsHandling;
- (id)_uuidInfoList;
- (id)_uuidToSymbolOwnerDict:(id)a0;
- (id)_uuidToTEXTSegmentOffsetListUsingSymbolOwners:(id)a0;
- (id)_uuidToTEXTSegmentOffsetsList;
- (void)addRequestCollection:(id)a0;
- (void)addRequestForSymbolOwnerUUID:(id)a0 offset:(unsigned long long)a1 isTextExec:(BOOL)a2;
- (id)initWithGroupName:(id)a0 timeoutInSec:(double)a1 shouldReadFromKeychain:(BOOL)a2 completionBlock:(id /* block */)a3;

@end
