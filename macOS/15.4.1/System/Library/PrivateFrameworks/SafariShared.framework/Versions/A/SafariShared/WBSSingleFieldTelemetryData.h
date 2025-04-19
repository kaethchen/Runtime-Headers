@class NSString;

@interface WBSSingleFieldTelemetryData : NSObject

@property (nonatomic) long long fieldType;
@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, copy, nonatomic) NSString *fieldID;
@property (nonatomic) BOOL isAutoFilled;
@property (readonly, nonatomic) BOOL wasPreviouslyAutoFilled;
@property (nonatomic) BOOL isManuallyFilledByUser;
@property (nonatomic) unsigned long long modificationType;
@property (nonatomic) unsigned long long autoFillOfferedType;

- (void).cxx_destruct;
- (id)initWithFieldType:(long long)a0 fieldID:(id)a1 elementType:(unsigned long long)a2;

@end
