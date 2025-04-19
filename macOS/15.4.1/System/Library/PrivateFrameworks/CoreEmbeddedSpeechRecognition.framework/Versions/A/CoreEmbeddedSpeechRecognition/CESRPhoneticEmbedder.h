@class NSString, NSArray, NSError;

@interface CESRPhoneticEmbedder : NSObject {
    void /* unknown type, empty encoding */ phoneticEmbedder;
    void /* unknown type, empty encoding */ localeString;
}

- (id)init;
- (void).cxx_destruct;
- (void)findAlternativesForString:(NSString *)a0 maxResults:(long long)a1 completion:(void (^)(NSArray *, NSError *, NSError *))a2;
- (id)initWithLocaleIdentifier:(id)a0 clientID:(id)a1;

@end
