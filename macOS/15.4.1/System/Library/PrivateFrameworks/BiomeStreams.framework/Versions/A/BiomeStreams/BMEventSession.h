@class NSArray;
@protocol NSCopying;

@interface BMEventSession : NSObject <NSSecureCoding> {
    NSArray *_events;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSCopying> key;
@property (readonly, nonatomic) NSArray *events;

+ (id)openSessionsFromBookmark:(id)a0;
+ (id)sessionPublisherWithStreamPublisher:(id)a0 startingBlock:(id /* block */)a1 endingBlock:(id /* block */)a2 sessionKeyBlock:(id /* block */)a3 options:(unsigned long long)a4;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 events:(id)a1;

@end
