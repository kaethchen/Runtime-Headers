@class NSString, NSMutableArray, NSMutableString;

@interface VCCaptionsTranscription : NSObject <NSCopying, NSCoding, NSSecureCoding, VCCaptionsTranscription> {
    NSMutableString *_formattedText;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int utteranceNumber;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isFinal;
@property (readonly, nonatomic) NSString *formattedText;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) double utteranceStartTimestamp;
@property (readonly, nonatomic) double utteranceDuration;
@property (readonly, nonatomic) NSMutableArray *segments;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addSegment:(id)a0;
- (id)initWithSFTranscription:(id)a0 taskInfo:(id)a1 isLocal:(BOOL)a2 isFinal:(BOOL)a3;
- (id)initWithSTTranscriberMultisegmentResult:(id)a0 taskInfo:(id)a1 isLocal:(BOOL)a2 isFinal:(BOOL)a3;
- (id)initWithUtteranceNumber:(unsigned int)a0 updateNumber:(unsigned int)a1 isLocal:(BOOL)a2 isFinal:(BOOL)a3 streamToken:(long long)a4;
- (void)setUpUtteranceStartTimestamp:(double)a0 andUtteranceDuration:(double)a1;

@end
