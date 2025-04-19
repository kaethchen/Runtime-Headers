@class NSLayoutXAxisAnchor, NSLayoutDimension, NSArray, NSISEngine, NSLayoutYAxisAnchor, NSLayoutGuide, _NSViewLayoutInvalidator, NSMutableArray, NSNumber, NSISVariable;

@interface _NSViewLayoutAux : NSObject {
    NSISEngine *_engine;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    NSISVariable *_widthVariable;
    NSISVariable *_heightVariable;
    NSArray *_internalConstraints;
    NSArray *_hostingPreferredSizeConstraints;
    NSArray *_constraintsExceptingSubviewAutoresizingConstraints;
    NSMutableArray *_declaredConstraints;
    NSMutableArray *_allActiveRuleNodes;
    NSMutableArray *_childRuleNodes;
    NSMutableArray *_layoutGuides;
    struct CGSize { double width; double height; } _oldSizeDuringLayoutDescent;
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutXAxisAnchor *_trailingAnchor;
    NSLayoutXAxisAnchor *_leftAnchor;
    NSLayoutXAxisAnchor *_rightAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutYAxisAnchor *_bottomAnchor;
    NSLayoutDimension *_widthAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutXAxisAnchor *_centerXAnchor;
    NSLayoutYAxisAnchor *_centerYAnchor;
    NSLayoutYAxisAnchor *_firstBaselineAnchor;
    NSLayoutYAxisAnchor *_lastBaselineAnchor;
    NSLayoutGuide *_safeAreaLayoutGuide;
    NSLayoutGuide *_layoutMarginsGuide;
    struct CGPoint { double x; double y; } _cachedRootOffset;
    unsigned long long _cachedOffsetChangeCount;
    NSISEngine *_cachedRootOffsetEngine;
    _NSViewLayoutInvalidator *_layoutInvalidator;
    unsigned long long _piercingToken;
    NSNumber *_layoutEngineWidth;
    double _firstPassWidth;
    unsigned char _updateConstraintsPassCounter;
    unsigned char _updateConstraintsInProgressCounter;
    struct { unsigned char _potentiallyHasDanglyConstraints : 1; unsigned char _mightBePiercedByConstraint : 1; unsigned char _doesNotTranslateAutoresizingMaskIntoConstraints : 1; unsigned char _wantsToHostAutolayoutEngine : 1; unsigned char _hostsAutolayoutEngine : 1; unsigned char _resizingFromLayout : 1; unsigned char _recursionGuard : 1; unsigned char _baselineOffsetMayBeReferenced : 1; unsigned char _constraintsReferencingBaselineOffsetNeedUpdating : 1; unsigned char _onlyNeedsUpdateConstraintsBecauseDeclaredConstraintRemoved : 1; unsigned char _preferredSizeConstraintsNeedUpdating : 1; unsigned char _allowsEngineHostPreferredSizeConstraints : 1; unsigned char _viewWasAdjustedToRetinaResolution : 1; unsigned char _indexOfFinishedConstraintsUpdatePass : 2; } _flags;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
