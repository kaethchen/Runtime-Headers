@class NSString, NSArray;

@interface IMPersistentMenu : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ displayText;
    void /* unknown type, empty encoding */ items;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ level;
@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) NSArray *items;

+ (id)example;
+ (BOOL)isEmptyStamped:(id)a0;
+ (id)emptyStampProperty;
+ (id)relayEmptyStampProperty;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLevel:(long long)a0 displayText:(id)a1 items:(id)a2;
- (id)relayDictionaryRepresentation;

@end
