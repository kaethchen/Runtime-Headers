@class NSString, NSData, _CPPunchoutForFeedback;

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPPunchoutForFeedback *destination;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int actionCardType;
@property (nonatomic) int feedbackType;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;
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
