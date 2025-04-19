@interface _PSPhotosShareInformation : NSObject {
    unsigned long long _interactionCount;
    unsigned long long _totalInteractionCount;
}

- (unsigned long long)interactionCount;
- (id)initWithInteractionCount:(unsigned long long)a0 totalInteractionCount:(unsigned long long)a1;
- (unsigned long long)totalInteractionCount;

@end
