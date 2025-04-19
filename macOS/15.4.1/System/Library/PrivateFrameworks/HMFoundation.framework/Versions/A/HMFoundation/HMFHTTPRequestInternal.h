@class NSString, NSDictionary, NSURL, NSData, NSMutableDictionary, HMFActivity;

@interface HMFHTTPRequestInternal : HMFObject {
    NSMutableDictionary *_headerFields;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *method;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;
@property (readonly, nonatomic) HMFActivity *activity;

- (id)init;
- (void).cxx_destruct;
- (id)responseWithStatusCode:(long long)a0;
- (void)setHeaderValue:(id)a0 forHeaderKey:(id)a1;

@end
