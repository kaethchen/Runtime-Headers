@class NTForYouRequest, NSArray, NSDictionary, NSDate, NSError;
@protocol FCNewsAppConfiguration;

@interface NTProxyForYouService : NSObject <NTForYouServiceType> {
    void /* unknown type, empty encoding */ feedPersonalizer;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedPersonalizer:(id)a0;
- (void)fetchForYouWithRequest:(NTForYouRequest *)a0 configuration:(id<FCNewsAppConfiguration>)a1 fetchDate:(NSDate *)a2 completionHandler:(void (^)(NSArray *, NSDictionary *, BOOL, NSError *))a3;

@end
