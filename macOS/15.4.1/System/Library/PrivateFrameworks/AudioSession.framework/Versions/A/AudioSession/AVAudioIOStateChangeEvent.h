@interface AVAudioIOStateChangeEvent : NSObject

@property (readonly, nonatomic) unsigned long long serialNumber;
@property (readonly, nonatomic) unsigned long long mainIOControllerFlags;
@property (readonly, nonatomic) unsigned long long decoupledInputIOControllerFlags;

- (id)initWithSerialNumber:(unsigned long long)a0 mainIOFlags:(unsigned long long)a1 decoupledInputFlags:(unsigned long long)a2;

@end
