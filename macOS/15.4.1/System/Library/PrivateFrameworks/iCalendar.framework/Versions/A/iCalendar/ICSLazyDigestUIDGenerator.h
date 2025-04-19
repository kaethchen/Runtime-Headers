@class NSData, NSString;

@interface ICSLazyDigestUIDGenerator : NSObject <ICSUIDGenerator> {
    NSData *_data;
    NSString *_digest;
    int _lastIndex;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_digest;
- (id)generateUID;

@end
