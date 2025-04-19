@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *formatIdentifier;
@property (retain, nonatomic) NSString *formatVersion;

- (id)init;
- (void).cxx_destruct;

@end
