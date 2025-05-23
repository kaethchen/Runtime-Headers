@class NSString, NSArray;

@interface TTKSimpleKeyboardPlane : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *keys;

+ (float)keyplaneHeightForKeys:(id)a0;
+ (float)keyplaneWidthForKeys:(id)a0;

- (void).cxx_destruct;
- (id)keyboardOrientation;
- (float)keyboardWidth;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithName:(id)a0 keys:(id)a1;
- (id)initWithTIKeyboardLayout:(id)a0;
- (id)toJsonDictionary;

@end
