@class ISIcon, NSDateComponents, NSCalendar;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) id<CUIKIconGenerator> iconGenerator;
@property (retain, nonatomic) ISIcon *internalIcon;

- (void).cxx_destruct;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForDescriptor:(id)a0;
- (id)prepareImageForDescriptor:(id)a0;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 forceNoTextEffects:(BOOL)a3;
- (id)initWithDate:(id)a0 calendar:(id)a1 format:(long long)a2;

@end
