// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <react/renderer/components/view/BaseViewProps.h>
#include <react/renderer/core/PropsParserContext.h>
#include "CompositionAccessibilityProps.h"
#include "KeyEvent.h"
#include "WindowsViewEvents.h"
#include <limits>

namespace facebook::react {
class HostPlatformViewProps : public BaseViewProps {
 public:
  HostPlatformViewProps() = default;
  HostPlatformViewProps(
      const PropsParserContext &context,
      const HostPlatformViewProps &sourceProps,
      const RawProps &rawProps,
      bool shouldSetRawProps = true);

  void
  setProp(const PropsParserContext &context, RawPropsPropNameHash hash, const char *propName, RawValue const &value);

  WindowsViewEvents windowsEvents{};
  bool enableFocusRing{true};
  bool focusable{false};
  int accessibilityPosInSet{0};
  int accessibilitySetSize{0};
  std::string accessibilityLiveRegion{"none"};
  int accessibilityLevel{0};
  std::optional<AccessibilityAnnotation> accessibilityAnnotation{};
  std::optional<std::string> accessibilityItemType{};
  std::optional<std::string> accessibilityAccessKey{};
  std::optional<std::string> accessibilityDescription{};

  // std::optional<std::string> overflowAnchor{};
  std::optional<std::string> tooltip{};
  std::vector<HandledKeyEvent> keyDownEvents{};
  std::vector<HandledKeyEvent> keyUpEvents{};
<<<<<<< HEAD
  int tabIndex{std::numeric_limits<int>::max()};
=======
  int tabIndex{std::numeric_limits<int>::max()}; // Default to max int, which means no tabIndex set
>>>>>>> a6866f532b097ea026cfa1538d2bfd2d08ad30ae
};
} // namespace facebook::react
