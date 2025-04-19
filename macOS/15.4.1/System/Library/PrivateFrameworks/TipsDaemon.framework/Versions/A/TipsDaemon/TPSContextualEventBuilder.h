@class NSDictionary, NSString;

@interface TPSContextualEventBuilder : NSObject {
    void /* unknown type, empty encoding */ dictionary;
    void /* unknown type, empty encoding */ eventType;
    void /* unknown type, empty encoding */ stream;
}

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *stream;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)contextualEvent;

@end
