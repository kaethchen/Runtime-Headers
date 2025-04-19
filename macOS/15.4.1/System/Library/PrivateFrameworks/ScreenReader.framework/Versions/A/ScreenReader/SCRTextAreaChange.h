@class NSString, AXFTextMarker;

@interface SCRTextAreaChange : NSObject

@property (readonly, nonatomic) long long editType;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) AXFTextMarker *marker;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic, getter=isTruncated) BOOL truncated;

+ (id)changeWithEditType:(long long)a0 value:(id)a1 marker:(id)a2 length:(unsigned long long)a3;
+ (void)collapsePairs:(id)a0;

- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)a0;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(long long)a0;
- (void)updateMarker:(id)a0;

@end
