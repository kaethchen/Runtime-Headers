@class TMStructureMetadata;

@interface TMStructureAnnotatedDiskState : NSObject

@property (readonly) long long state;
@property (readonly, retain) TMStructureMetadata *metadata;

+ (id)annotatedStateWithDiskState:(long long)a0 metadata:(id)a1;

- (void).cxx_destruct;
- (id)annotatedStateByReplacingDiskState:(long long)a0;
- (id)initWithDiskState:(long long)a0 metadata:(id)a1;

@end
