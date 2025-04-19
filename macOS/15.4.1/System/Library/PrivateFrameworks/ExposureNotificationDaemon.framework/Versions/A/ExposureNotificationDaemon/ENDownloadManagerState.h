@class NSArray, NSDictionary;

@interface ENDownloadManagerState : NSObject <NSSecureCoding> {
    NSDictionary *_statesByURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *endpoints;
@property (readonly, copy, nonatomic) NSArray *endpointStates;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEndpoints:(id)a0;
- (id)stateForServerBaseURL:(id)a0;

@end
