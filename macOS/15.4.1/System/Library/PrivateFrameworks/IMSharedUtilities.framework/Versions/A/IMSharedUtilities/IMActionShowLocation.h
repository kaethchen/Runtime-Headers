@class NSString;

@interface IMActionShowLocation : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ fallbackUrl;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ latitude;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ longitude;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *fallbackUrl;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 query:(id)a2 label:(id)a3 fallbackUrl:(id)a4;

@end
