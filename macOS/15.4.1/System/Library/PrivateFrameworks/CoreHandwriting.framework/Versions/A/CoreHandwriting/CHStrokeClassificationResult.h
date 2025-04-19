@class NSDictionary, NSSet;

@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_textStrokeIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *midYPositionByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *scriptClassificationsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *scriptClassificationRawResultsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *substrokesByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSSet *textStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSSet *nontextCandidates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)differenceFromResult:(id)a0 removedStrokeIds:(id)a1;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 scriptClassificationsByStrokeIdentifier:(id)a1 scriptClassificationRawResultsByStrokeIdentifier:(id)a2 substrokesByStrokeIdentifier:(id)a3 midYPositionByStrokeIdentifier:(id)a4 nontextCandidates:(id)a5;
- (BOOL)isEquivalentToStrokeClassificationResult:(id)a0;
- (BOOL)isHighConfidenceForStrokesIdentifiers:(id)a0 script:(id)a1 confidenceThreshold:(double)a2;
- (double)scriptClassificationScoreForStrokeIdentifier:(id)a0 script:(id)a1;
- (id)subResultForStrokeIdentifiers:(id)a0;

@end
