@class NSString, AXFTextMarker;

@interface _SCRTextAreaChangeSimple : SCRTextAreaChange {
    BOOL _truncated;
}

@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) AXFTextMarker *marker;
@property (nonatomic) unsigned long long length;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTruncated;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)a0;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(long long)a0;
- (void)updateMarker:(id)a0;

@end
