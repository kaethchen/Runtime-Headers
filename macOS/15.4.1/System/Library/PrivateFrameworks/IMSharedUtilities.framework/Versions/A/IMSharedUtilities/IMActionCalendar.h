@class NSString;

@interface IMActionCalendar : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ endTime;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ calDescription;
    void /* unknown type, empty encoding */ fallbackUrl;
}

@property (nonatomic, readonly) NSString *startTime;
@property (nonatomic, readonly) NSString *endTime;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *calDescription;
@property (nonatomic, readonly) NSString *fallbackUrl;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 title:(id)a2 calDescription:(id)a3 fallbackUrl:(id)a4;

@end
