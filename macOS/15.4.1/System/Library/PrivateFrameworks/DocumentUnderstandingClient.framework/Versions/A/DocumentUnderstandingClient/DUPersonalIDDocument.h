@class NSArray;

@interface DUPersonalIDDocument : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_boundingBoxes;
    NSArray *_confidenceScores;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *lines;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOCRContents:(id)a0 documentType:(long long)a1;
- (id)initWithText:(id)a0 documentType:(long long)a1;
- (id)initWithTextLines:(id)a0 boundingBoxes:(id)a1 confidenceScores:(id)a2 documentType:(long long)a3;

@end
