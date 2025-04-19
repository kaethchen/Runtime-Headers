@class CBAPEndpoint;

@interface APToDCPEndpoint : NSObject {
    CBAPEndpoint *_endpoint;
}

+ (id)sharedInstance;

- (id)init;
- (id)copyProperty:(id)a0;

@end
