@class NSString, _CPQueryUnderstandingParse, NSData, _CPPhotosRankingInfo;

@interface _CPEndLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndLocalSearchFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) _CPQueryUnderstandingParse *quParse;
@property (nonatomic) unsigned int l1ToL2ResultCount;
@property (nonatomic) unsigned int coreSpotlightIndexCount;
@property (retain, nonatomic) _CPPhotosRankingInfo *photosRankingInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
