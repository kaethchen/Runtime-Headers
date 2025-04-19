@class CRCameraReader, NSMutableDictionary;

@interface CRInsightsContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (weak, nonatomic) CRCameraReader *cameraReader;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithContext:(id)a0;
- (id)valueForKey:(id)a0;

@end
