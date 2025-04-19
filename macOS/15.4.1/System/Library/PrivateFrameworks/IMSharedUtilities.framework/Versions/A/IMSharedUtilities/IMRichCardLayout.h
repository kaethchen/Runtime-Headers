@class NSString;

@interface IMRichCardLayout : NSObject <IMAttributableContent> {
    void /* unknown type, empty encoding */ cardStyleUrl;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ orientation;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageAlignment;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ width;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleStyle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ descriptionStyle;
@property (nonatomic, readonly) NSString *cardStyleUrl;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithOrientation:(long long)a0 imageAlignment:(long long)a1 width:(long long)a2 titleStyle:(id)a3 descriptionStyle:(id)a4 cardStyleUrl:(id)a5;

@end
