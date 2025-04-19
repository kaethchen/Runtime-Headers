@class NSString, NSDate;

@interface PDComment : NSObject {
    struct CGPoint { double x; double y; } mPosition;
    NSString *mText;
    unsigned long long mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
}

@property (retain, nonatomic) NSString *author;
@property (retain) PDComment *parent;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)date;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setDate:(id)a0;
- (id)text;
- (void)setText:(id)a0;
- (unsigned long long)authorId;
- (void)setAuthorId:(unsigned long long)a0;

@end
