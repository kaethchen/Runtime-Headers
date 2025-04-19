@class CESRContextualEntityEnablementConfig, CESRContextualEntityRetrievalConfig;

@interface CESRContextualEntityConfig : NSObject

@property (readonly, nonatomic) CESRContextualEntityEnablementConfig *enablementConfig;
@property (readonly, nonatomic) CESRContextualEntityRetrievalConfig *retrievalConfig;

- (void).cxx_destruct;
- (BOOL)_parseJsonObject:(id)a0;
- (id)initWithJsonObject:(id)a0;

@end
