@class NSColor;

@interface LPAudioPlayButtonTheme : NSObject

@property (readonly, retain, nonatomic) NSColor *keyColor;
@property (readonly, retain, nonatomic) NSColor *secondaryColor;
@property (readonly, retain, nonatomic) NSColor *outerBorderColor;
@property (readonly, nonatomic) BOOL useInvertedInactiveState;

- (void).cxx_destruct;
- (id)initWithKeyColor:(id)a0 secondaryColor:(id)a1 outerBorderColor:(id)a2 useInvertedInactiveState:(BOOL)a3;

@end
