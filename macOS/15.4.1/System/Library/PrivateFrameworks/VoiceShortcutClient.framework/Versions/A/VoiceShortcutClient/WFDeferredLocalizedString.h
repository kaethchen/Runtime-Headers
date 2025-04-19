@class NSString, _NSLocalizedStringResource;

@interface WFDeferredLocalizedString : NSString

@property (copy, nonatomic) NSString *backingStore;
@property (copy, nonatomic) NSString *localizedValue;
@property (copy, nonatomic) _NSLocalizedStringResource *stringResource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
