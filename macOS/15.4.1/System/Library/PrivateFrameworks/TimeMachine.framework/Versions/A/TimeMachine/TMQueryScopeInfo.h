@class NSArray;

@interface TMQueryScopeInfo : NSObject

@property (readonly) long long kind;
@property (readonly) NSArray *locations;

+ (id)scopePathForVolumeRelativePath:(id)a0 volumeUUID:(id)a1 computerMACAddress:(id)a2;

- (void).cxx_destruct;
- (id)initWithKind:(long long)a0 locations:(id)a1;

@end
