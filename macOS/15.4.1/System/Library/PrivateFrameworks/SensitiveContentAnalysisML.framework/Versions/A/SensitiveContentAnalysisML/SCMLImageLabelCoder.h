@class NSDictionary;

@interface SCMLImageLabelCoder : NSObject

@property (retain, nonatomic) NSDictionary *_encodeToHexDict;
@property (retain, nonatomic) NSDictionary *_decodeFromHexDict;

+ (id)instance;
+ (id)_createHexDecodingDict;
+ (id)_createHexEncodingDict;
+ (id)_nameFromRevParts:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)decodeFromP1:(id)a0;
- (id)encodeToP1:(id)a0;
- (id)decodeFromHex:(id)a0;
- (id)encodeToHex:(id)a0;

@end
