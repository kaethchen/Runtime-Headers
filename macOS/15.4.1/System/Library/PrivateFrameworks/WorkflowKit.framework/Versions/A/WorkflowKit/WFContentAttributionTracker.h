@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFContentAttributionTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attributionSets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingAttributionSetQueue;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAttributionSet:(id)a0 forParameter:(id)a1;
- (id)attributionSetForParameter:(id)a0;
- (id)initWithAttributionSets:(id)a0;
- (void)replaceAttributionSet:(id)a0 forParameter:(id)a1;
- (id)trackedAttributionSet;

@end
