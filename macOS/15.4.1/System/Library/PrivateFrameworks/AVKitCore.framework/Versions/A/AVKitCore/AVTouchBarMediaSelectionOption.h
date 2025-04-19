@class NSString;

@interface AVTouchBarMediaSelectionOption : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id representedObject;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 type:(long long)a1;

@end
