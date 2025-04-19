@class NSString;
@protocol BPSPublisher;

@interface BPSOrderedMergeUpstreamState : NSObject <BMBookmark>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (retain, nonatomic) id nextEvent;
@property (retain, nonatomic) id lastReturnedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)attachUpstream:(id)a0;
- (id)initWithNextEvent:(id)a0 lastReturnedEvent:(id)a1;

@end
