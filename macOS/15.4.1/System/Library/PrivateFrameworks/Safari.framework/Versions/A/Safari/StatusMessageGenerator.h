@interface StatusMessageGenerator : NSObject

+ (id)statusMessageForMouseoverLink:(id)a0 onPageWithURL:(id)a1 frame:(void *)a2 targetFrame:(void *)a3 modifiers:(unsigned long long)a4 usingPrivateBrowsing:(BOOL)a5;
+ (id)statusMessageForMouseoverLink:(id)a0 onPageWithURL:(id)a1 frameExists:(BOOL)a2 targetFrameExists:(BOOL)a3 frameAndTargetFrameAreTheSame:(BOOL)a4 frameAndTargetFrameShareSamePage:(BOOL)a5 modifiers:(unsigned long long)a6 usingPrivateBrowsing:(BOOL)a7;

@end
