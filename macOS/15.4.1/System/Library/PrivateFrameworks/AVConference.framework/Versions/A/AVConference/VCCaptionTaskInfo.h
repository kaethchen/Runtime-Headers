@interface VCCaptionTaskInfo : NSObject {
    double _hostTime;
}

@property (readonly, retain, nonatomic) id task;
@property (readonly) long long token;
@property unsigned int updateNumber;
@property (readonly) unsigned int utteranceNumber;

- (void)dealloc;
- (id)description;
- (id)initWithTask:(id)a0 token:(long long)a1 utteranceNumber:(unsigned int)a2;

@end
