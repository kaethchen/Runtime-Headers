@class NSNumber;

@interface NSFileProviderMovingResponse : NSObject <NSSecureCoding> {
    unsigned long long _syncRootID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL requiresProviding;
@property BOOL requiresAccessorBlockMaterializationPolicy;
@property (readonly) NSNumber *syncRootID;

+ (id)providingNotRequiredResponseWithSyncRootID:(unsigned long long)a0;
+ (id)providingRequiredResponse;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
