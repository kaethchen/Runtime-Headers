@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface WFContentItemCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMapTable *cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clear;
- (id)initWithCache:(id)a0;
- (void)addContentCollection:(id)a0;
- (id)contentItemForUUID:(id)a0;
- (void)deleteContentCollection:(id)a0;

@end
