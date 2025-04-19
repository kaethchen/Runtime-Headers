@class NSUUID, NSMutableDictionary, NSMutableOrderedSet;
@protocol ATXProactiveSuggestionFeedbackContextProtocol;

@interface ATXUIFeedbackPriorContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableOrderedSet *cacheUpdateOrdering;
@property (readonly, nonatomic) NSMutableDictionary *blendingModelCacheUpdates;
@property (readonly, nonatomic) NSMutableDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) id<ATXProactiveSuggestionFeedbackContextProtocol> context;
@property (readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (void)addContext:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (void)_pruneBlendingModelCachesOlderThanUUID:(id)a0;
- (id)_referencedClientModelCaches;
- (void)_validateCacheUpdateOrderingAndCacheDictMapping;
- (void)addBlendingModelUICacheUpdate:(id)a0;
- (void)addClientModelCacheUpdate:(id)a0;
- (id)blendingModelUICacheUpdateForUUID:(id)a0;
- (id)clientModelCacheUpdatesForUICacheUpdateUUID:(id)a0;
- (id)initWithCacheUpdateOrdering:(id)a0 blendingModelCacheUpdates:(id)a1 clientModelCacheUpdates:(id)a2 context:(id)a3 pinnedBlendingModelUICacheUpdateUUID:(id)a4;
- (BOOL)isEqualToATXUIFeedbackPriorContext:(id)a0;
- (void)pruneBlendingModelCachesOverMaxNum;
- (void)pruneContextStateOlderThanBlendingUUID:(id)a0;
- (void)pruneUnreferencedClientModelCachesIfPossible;
- (void)updatePinnedBlendingModelUICacheUpdateUUID:(id)a0;
- (id)validContextClassNames;

@end
