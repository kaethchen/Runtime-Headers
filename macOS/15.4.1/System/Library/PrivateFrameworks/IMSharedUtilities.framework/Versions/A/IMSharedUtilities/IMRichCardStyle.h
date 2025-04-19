@interface IMRichCardStyle : NSObject <IMAttributableContent>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ italics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ underline;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithBold:(BOOL)a0 italics:(BOOL)a1 underline:(BOOL)a2;

@end
