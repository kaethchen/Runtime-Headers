@class NSString;

@interface IDMapping : NSObject {
    NSString *_localId;
    NSString *_globalId;
}

+ (id)mappingFromGlobalId:(id)a0 toLocalId:(id)a1;

- (void)dealloc;
- (id)description;
- (id)localId;
- (id)globalId;
- (id)initMappingFromGlobalId:(id)a0 toLocalId:(id)a1;
- (void)setLocalId:(id)a0;

@end
