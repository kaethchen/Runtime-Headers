@class NSString;

@interface PeopleSuggesterFeedbackMessage : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPrivatizedCandidateIdentifier;
@property (retain, nonatomic) NSString *privatizedCandidateIdentifier;
@property (readonly, nonatomic) BOOL hasPrivatizedTransportBundleId;
@property (retain, nonatomic) NSString *privatizedTransportBundleId;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;

@end
