@class AXFTextMarkerRange, SCRSimpleTimer;
@protocol SCRTextDelayedWordEchoHelperDataSource, SCRTextDelayedWordEchoHelperDelegate;

@interface SCRTextDelayedWordEchoHelper : NSObject

@property (retain, nonatomic, setter=_setTimer:) SCRSimpleTimer *_timer;
@property (retain, nonatomic, setter=_setTextMarkerRange:) AXFTextMarkerRange *_textMarkerRange;
@property (retain, nonatomic, setter=_setPunctuationMarkerRange:) AXFTextMarkerRange *_punctuationMarkerRange;
@property (retain, nonatomic, setter=_setLastEchoedTextMarkerRange:) AXFTextMarkerRange *_lastEchoedTextMarkerRange;
@property (nonatomic, setter=_setDelay:) double delay;
@property (weak, nonatomic) id<SCRTextDelayedWordEchoHelperDataSource> dataSource;
@property (weak, nonatomic) id<SCRTextDelayedWordEchoHelperDelegate> delegate;
@property (nonatomic) unsigned long long lastWordEchoResult;

- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)resetCache;
- (unsigned long long)updateWithChange:(id)a0;
- (void)_timerFired;
- (id)initWithDelay:(double)a0;
- (BOOL)_echoWithAdditionalContent:(id)a0;
- (BOOL)_shouldEchoPreviousWord:(id)a0;
- (BOOL)_shouldEchoWordIfPunctuation:(id)a0;
- (BOOL)_shouldEchoWordIfSymbol:(id)a0;
- (long long)_shouldEchoWordIfTypingChangeAtEndOfWord:(id)a0 wordTextMarkerRange:(id)a1;
- (BOOL)_shouldEchoWordIfWhitespaceOrNewline:(id)a0;
- (void)updateTextMarkerRange:(id)a0;

@end
