@class NSString, NSDictionary, NSMutableSet, NSData;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    BOOL _simple;
    BOOL _returnChangedData;
    NSData *_pushedData;
    BOOL _validCTag;
    NSString *_requestDataContentType;
}

@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (readonly, nonatomic) NSString *nextCTag;
@property (readonly, nonatomic) NSMutableSet *bulkChangeResponses;

- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)fillOutDataWithUUIDsToAddActions:(id)a0 hrefsToModDeleteActions:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithURL:(id)a0 checkCTag:(id)a1 simple:(BOOL)a2 returnChangedData:(BOOL)a3 uuidsToAddActions:(id)a4 hrefsToModDeleteActions:(id)a5;

@end
